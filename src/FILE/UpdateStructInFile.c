#include <stdio.h>
 
struct person
{
    unsigned id;
    char name[10];
    int age;
};
 
void save(char*);
void update_age(char*, int, int);
 
int main() {
    char * filename = "people.bin";
    save(filename);
    update_age(filename, 2, 33); // в структуре с id=2 устанавливаем age = 33
}
void save(char* filename)
{
    struct person people[] = { {1, "Tom", 38}, {2, "Sam", 25}, {3, "Bob", 42}};
    int size = sizeof(people[0]);              // размер всего массива
    int count = sizeof(people)  / size;         // количество структур 
     
    // запись файла
    FILE *fp = fopen(filename, "w");
    // записываем массив структур
    fwrite(people, size, count, fp); 
    fclose(fp);
    printf("%d people saved\n", count);
}
 
void update_age(char* filename, int id, int age)
{
    // считывание файла, пока не найдем структуру с определенным id
    struct person p;  // структура для чтения 
    int size = sizeof(p);
    FILE* fp = fopen(filename, "r+");   // "r+" - открываем файл для изменения
    // считываем данные в структуру
    while(fread(&p, sizeof(p), 1, fp)==1)
    {
        // если нашли структуру с нужным id
        if(p.id == id)
        {
            p.age = age;                    // изменяем возраст
            fseek(fp, -1*size, SEEK_CUR);   // перемещаем в потоке на один объект назад
            fwrite(&p, size, 1, fp);      // записываем обновленную структуру 
            break;                        // выходим из цикла
        }
    }
    rewind(fp);     // перематываем файл назад
 
    // считываем по одной структуре и проверяем изменения
    while(fread(&p, sizeof(p), 1, fp) == 1)
    { 
        printf("Id: %d \t Name: %s \t Age: %d \n", p.id, p.name, p.age);
    }
    fclose(fp);
}