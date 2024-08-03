#include <semaphore.h>
#include <pthread.h>
#include <stdio.h>
#include <unistd.h>
 
sem_t sem;              // семафор
int result1 = 0;
int result2 = 0;
 
// Функция Потока 1
void* thread1_work(void* args) 
{
    result1 = 1;        // условная работа потока - установка переменной
    puts("Thread1 works");
    sem_post(&sem);     // увеличиваем значение семафора
    return NULL;
}
// Функция Потока 2
void* thread2_work(void* args) 
{
    result2 = 2;        // условная работа потока - установка переменной
    puts("Thread2 works");
    sem_post(&sem);     // увеличиваем значение семафора
    return NULL;
}
// Функция Потока 3
void* thread3_work(void* arg) 
{
    puts("Thread3 waits");
    sem_wait(&sem);     // ожидаем, когда семафор станет больше 0 и уменьшаем его
    sem_wait(&sem);     // ожидаем, когда семафор станет больше 0 и уменьшаем его
    printf("result1 = %d result2 = %d\n", result1, result2);
    return NULL;
}
int main(void) 
{
    sem_init(&sem, 0, 0);       // инициализируем семафор
 
    pthread_t thread1, thread2, thread3;
    pthread_create(&thread3, NULL, thread3_work, NULL);
    sleep(2);   // чтобы Поток 3 начал выполняться раньше
    pthread_create(&thread1, NULL, thread1_work, NULL);
    pthread_create(&thread2, NULL, thread2_work, NULL);
 
    sem_destroy(&sem);      // удаляем семафор
     
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);
    pthread_join(thread3, NULL);
 
    return 0;
}