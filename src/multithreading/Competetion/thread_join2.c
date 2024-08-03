#include <pthread.h>
#include <stdio.h>
#include <unistd.h> 
 
void* some_work(void* arg) 
{
    for(int i = 0; i < 3; ++i) 
    {
        puts(arg);
        sleep(1);
    }
    return "Bye, World";
}
int main(void) 
{
    pthread_t thread;
    void* thread_result;    // для получения результата потока
    pthread_create(&thread, NULL, some_work, "Hello World" );
    pthread_join(thread, &thread_result);     // ждем завершения потока thread
    puts(thread_result);
    return 0;
}