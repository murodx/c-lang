#include <stdio.h>
#include <stdlib.h>

#define MAX_UNUSED_BUFFERS 10

void* unused_buffers[MAX_UNUSED_BUFFERS];
int buffer_count = 0;

void release_buffers() {
    for (int i = 0; i < buffer_count; i++) {
        free(unused_buffers[i]);
    }
    buffer_count = 0;
}

void* allocate_buffer(size_t size) {
    if (buffer_count >= MAX_UNUSED_BUFFERS) {
        release_buffers(); // Освободить все накопленные буферы
    }
    void* buffer = malloc(size);
    return buffer;
}

void lazy_free(void* buffer) {
    if (buffer_count < MAX_UNUSED_BUFFERS) {
        unused_buffers[buffer_count++] = buffer; // Накапливаем буфер
    } else {
        free(buffer); // Если слишком много буферов, освободить сразу
    }
}

int main() {
    void* buffer1 = allocate_buffer(1024);
    void* buffer2 = allocate_buffer(2048);
    
    lazy_free(buffer1);
    lazy_free(buffer2);
    
    // Вручную вызываем освобождение
    release_buffers();

    return 0;
}
