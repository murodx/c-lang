#include <pthread.h>
#include <stdio.h>

//  несколько потоков, которые будут выполнять различные задачи одновременно. 

void *some_work(void *arg){
    for (int i = 0; i < 5; i++){
        puts(arg);
    }
    return NULL;
    
}

int main() {
    pthread_t thread1,thread2;
    // Create a thread
    pthread_create(&thread1,NULL,some_work,"Hello World");
    pthread_create(&thread2, NULL, some_work, "Hello METANIT.COM" );

    // pthread_exit() позволяет подождать, пока не завершаться все потоки
    pthread_exit(NULL);
   
    printf("End...\n");
    return 0;
}
