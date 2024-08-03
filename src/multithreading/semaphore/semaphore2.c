#include <semaphore.h>
#include <pthread.h>
#include <stdio.h>
#include <unistd.h>

sem_t sem; // semaphore

// Функция Повара
void* cook(void* args) 
{
    puts("Breakfast is ready");  // повар готовит завтрак
    sem_post(&sem);     // увеличиваем значение семафора
    sleep(2);
    puts("Lunch is ready");  // повар готовит обед
    sem_post(&sem);     // увеличиваем значение семафора
    sleep(2);
    puts("Dinner is ready");  // повар готовит ужин
    sem_post(&sem);     // увеличиваем значение семафора
    return NULL;
} 
// Функция уничтожителя еды
void* eat(void* arg) 
{
    sem_wait(&sem);     // ожидаем, когда семафор станет больше 0 и уменьшаем его
    puts("Having breakfast");  // едим завтрак
    sem_wait(&sem);     // ожидаем, когда семафор станет больше 0 и уменьшаем его
    puts("Having lunch");  // едим обед
    sem_wait(&sem);     // ожидаем, когда семафор станет больше 0 и уменьшаем его
    puts("Having dinner");  // едим ужин
     
    return NULL;
}

int main(void) 
{
    sem_init(&sem, 0, 0);       // инициализируем семафор
    pthread_t chief, eater;
    pthread_create(&eater, NULL, eat, NULL);
    sleep(2);   // аппетит приходит вовремя, а еду опять задерживают на 2 секунды
    pthread_create(&chief, NULL, cook, NULL);
 
    sem_destroy(&sem);      // удаляем семафор
     
    pthread_join(chief, NULL);
    pthread_join(eater, NULL);
 
    return 0;
}