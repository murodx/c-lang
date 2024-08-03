#include <pthread.h>
#include <stdio.h>
#include <unistd.h>

void *some_work(void *arg){
    for (int i = 0; i < 3; i++){
        puts(arg);
        sleep(1);
    }
    return NULL;
    
}

int main() {
    pthread_t thread;
    pthread_create(&thread,NULL,some_work,"Hello World");
    pthread_join(thread,NULL);
    printf("End...");
    return 0;
}
