#include <pthread.h>
#include <stdio.h>
#include <unistd.h>
 
int value = 0;  // общий ресурс
 
pthread_mutex_t m; // мьютекс для разграничения доступа
 
void* do_work(void* thread_id)
{
     // *() Разыменование
    int id = *(int*)thread_id;
    pthread_mutex_lock( &m );   // поток блокирует мьютекс
    value = 1;                  // начало работы с обшим ресурсом
    for (int n = 0; n < 5; n++) 
    {
        printf("Thread %d: %d\n", id, value );
        value += 1;
        sleep(1);
    }
    pthread_mutex_unlock( &m );     // поток освобождает мьютекс
    return NULL;
}
int main(void) 
{
    pthread_t t1, t2;
    int t1_id = 1, t2_id = 2; 
    pthread_mutex_init(&m, NULL); //  инициализация мьютекса
    pthread_create(&t1, NULL, do_work, &t1_id);
    pthread_create(&t2, NULL, do_work, &t2_id);
 
    pthread_join(t1, NULL);
    pthread_join(t2, NULL);
     
    pthread_mutex_destroy(&m);  // удаление мьютекса
    return 0;
}