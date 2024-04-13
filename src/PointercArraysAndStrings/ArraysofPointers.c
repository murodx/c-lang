#include <stdio.h>
  
int main(void)
{   
    int array[] = {1, 2, 3, 4};
    int *p[] = { &array[1], &array[2], &array[0] };
 
    // for(int i = 0; i < 3; i++)
    // {
    //     printf("%d", *p[i]);
    // }


// Вместо *p[i] мы могли бы написать **(p+i):
// p+i - к адресу в указателе p прибавляем число i и таким образом перемещаемся по указателям в массиве p.
// *(p+i) - разыменовываем i-тый указатель в массиве и в результате получаем адрес одного из элементов из массива array.
// **(p+i) - получаем значение по полученному на предыдущем шаге адресу элемента из массива array.
    // for(int i = 0; i < 3; i++)
    // {
    //     printf("%d", **(p+i));
    // }
    // return 0;

// Указатель и массив строк
    // char *fruit[] = {"apricot", "apple", "banana", "lemon", "orange"};
    // for(int i=0; i < 5; i++)
    // {
    //     printf("%s \n", fruit[i]);
    //     // it`s same printf("%s \n", *(fruit + i));
    // }

// Указатели на указатели || многоуровневой адресацией.
    // int  x = 22;
    // int *px = &x;       // указатель px хранит адрес переменной x
    // int **ppx = &px;    // указатель ppx хранит адрес указателя px
         
    // printf("Address of px: %p \n", (void *)ppx);
    // printf("Address of x: %p \n", (void *)*ppx);
    // printf("Value of x: %d \n", **ppx);
    // // Здесь указатель ppx хранит адрес указателя px. 
    // // Поэтому через выражение *ppx можно получить значение, которое хранится в указателе px - адрес переменной x. 
    // // А через выражение **ppx можно получить значение по адресу из px, то есть значение переменной x.

// Solutions
    char *person[] = {"Tom", "Bob", "Sam"};
    int count = sizeof(person) / sizeof(person[0]);
    for(int i = 0;i < count;i++){
    printf("%s \n",person[i]);
    // it`s same printf("%s \n",*(str+i));
}    
}