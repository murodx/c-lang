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
    pthread_t thread1, thread2;
    pthread_create(&thread1, NULL, some_work, "Hello World" );
    pthread_create(&thread2, NULL, some_work, "Hello METANIT.COM" );
 
    pthread_join(thread1, NULL);     // ждем завершения потока thread1
    pthread_join(thread2, NULL);     // ждем завершения потока thread2
    puts("End...");
    return 0;
}