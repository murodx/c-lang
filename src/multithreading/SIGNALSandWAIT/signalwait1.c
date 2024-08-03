#include <pthread.h>
#include <stdio.h>
#include <unistd.h>

int signal_sent = 0;   // условие - общий ресурс
pthread_cond_t condvar = PTHREAD_COND_INITIALIZER;  // условная переменная
pthread_mutex_t mutex;      // мьютекс
 
// функция первого потока
void* thread1_work(void* arg) 
{
    pthread_mutex_lock(&mutex);             // Поток 1 блокирует мьютекс
    puts("Thread1 starts and waits for signal");
    // во время ожидания поток освобождает мьютекс 
    // !0 == 1 true
    while (!signal_sent)       // пока не будет удовлетворять условие
    { 
        pthread_cond_wait(&condvar, &mutex);    // Поток 1 ожидает сигнала
    }
    // pthread_cond_wait(&condvar, &mutex);
    // После получения сигнала он опять захватывает мьютекс
 
    puts("Thread1 received a signal");
    pthread_mutex_unlock(&mutex);         // Поток 1 освобождает мьютекс
    return NULL;
}
// функция второго потока
void* thread2_work(void* arg) 
{
    pthread_mutex_lock(&mutex);                 // Поток 2 блокирует мьютекс
    puts("Thread2 starts and does some work"); // Поток 2 выполняет условную работу
    puts("Thread2 is sending a signal");
    signal_sent = 1;                           // Поток 2 изменяет общую переменную
 
    pthread_cond_signal(&condvar);      // ПОток 2 посылает сигнал
    puts("Thread2 sent a signal");
    pthread_mutex_unlock( &mutex );         // Поток 2 освобождает мьютекс
    return NULL;
}
int main(void) 
{
    pthread_t thread1, thread2;
    pthread_mutex_init(&mutex, NULL);
 
    pthread_create(&thread1, NULL, thread1_work, NULL);
    sleep(2);   // ждем, чтобы Поток 1 гарантировано начал выполняться первым
    pthread_create(&thread2, NULL, thread2_work, NULL);
 
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);
 
    pthread_mutex_destroy(&mutex);
    return 0;
}