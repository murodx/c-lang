#include <stdio.h>
 
int main(void)
{
    // int array[] = {1, 2, 3, 4, 5};
    // printf("array[0] = %d", *array);    // array[0] = 1
 
    // int array[] = {1, 2, 3, 4, 5};
    // int second = *(array + 1); // получим второй элемент
    // printf("array[1] = %d", second);    // array[1] = 2

    // int array[] = {1, 2, 3, 4, 5};
    // int third = 2[array];
    // printf("array[2] = %d", third); // array[2] = 3

    // мы можем пробежаться по всем элементом массива, прибавляя к адресу определенное число:
    // int array[5] = {1,2,3,4,5};
    // for(int i = 0; i < 5; i++){
    //     void *address = array + i; // получаем адрес i-го элемента массива
    //     int value = *(array + i); // получаем значение i-го элемента массива
    //     printf("array[%d]: addres=%p \t value=%d \n", i, address,value);
    // }
    // В то же время имя массива это не стандартный указатель, мы не можем изменить его адрес, например, так:
    // int array[5] = {1, 2, 3, 4, 5};
    // array++;            // так сделать нельзя
    // int b = 8;
    // array = &b; 


// Использование указателя для работы с массивом
    // int array[5] = {1, 2, 3, 4, 5};
    // int *ptr = array;   // указатель ptr хранит адрес первого элемента массива array
    // printf("value: %d \n", *ptr);   // 1


    // int array[5] = {1, 2, 3, 4, 5};
    // int *ptr = array;   // указатель ptr хранит адрес первого элемента массива array
    // ptr = ptr + 4;      // перемезаем указатель на 2 элемента вперед
    // printf("value: %d \n", *ptr);   // value: 3

    // int array[5] = {1, 2, 3, 4, 5};
    // int *ptr = array;       // указатель ptr хранит адрес первого элемента массива array
    // ptr = ptr + 2;          // переходим к третьему элементу
    // *ptr = 8;               // меняем значение элемента, на который указывает указатель
 
    // printf("array[2]: %d \n", array[2]);    // array[2] : 8

    // int array[5] = {1, 2, 3, 4, 5};
    // int *ptr = array;       // указатель ptr хранит адрес первого элемента массива array
    // int value = ptr[2];     // используем индексы - получаем 3-й элемент (элемент с индексом 2)
 
    // printf("value: %d \n", value);  // value: 3
    // return 0;

// Строки и указатели
    //  в языке Си также для представления строк можно использовать указатели на тип char:
    // char *hello = "Hello METANIT.COM!"; // указатель на char - фактически строка
    // printf("%s", hello);
    // return 0;

// Перебор массива с помощью указателей

    // int array[5] = {1,2,3,4,5};
    // // пока адрес в указателе не станет равным адресу последнего элемента
    // for(int *ptr = array; ptr<=&array[4]; ptr++){
    //     printf("address=%p \t value=%d \n", (void*)ptr, *ptr);

    // }

    // int array[3][4] = { {1, 2, 3, 4} , {5, 6, 7, 8}, {9, 10, 11, 12}};
    // int n = sizeof(array)/sizeof(array[0]);         // число строк
    // int m = sizeof(array[0])/sizeof(array[0][0]);   // число столбцов
     
    // int *final = array[0] + n * m - 1;  // указатель на самый последний элемент
    // for(int *ptr=array[0], i = 1; ptr <= final; ptr++, i++)
    // {
    //     printf("%d \t", *ptr);
    //     // если остаток от целочисленного деления равен 0,
    //     // переходим на новую строку
    //     if(i%m==0)
    //     {
    //         printf("\n");
    //     }
    // }   
    // // Мы также могли бы обойтись и без указателя на последний элемент, проверяя значение счетчика, пока оно не станет равно общему количеству элементов (m * n):
    // // for(int *ptr = array[0], i = 0; i < m*n;)
    // // {
    // // printf("%d \t", *ptr++);
    // // if(++i%m==0)
    // // {
    // //     printf("\n");
    // // }

// String interning
// По выводу видно, что первый символ второй строки расположен через 6 байтов начала первой строки. То есть строки расположены в памяти рядом друг с другом.
    // char* str1 = "Hello"; str1 = 0x55c2667d9004 
    // char* str2 = "World"; str2 = 0x55c2667d900a 

// Оба адреса одинаковые, потому что обе переменных в реальности указывают на одну и ту же строку. Интернирование строк позволяет избежать дублирования строк, более эффективно использовать память. 
// Причем здесь не важно, что переменные являются глобальными. Они также могут быть локальными, но все равно будут указывать на один и тот же адрес в .rodata.
    // char* str1 = "Hello World"; // str1 = 0x56015c20d004 
    // char* str2 = "Hello World"; // str1 = 0x56015c20d004 
    // printf("str1 = %p \n", &str1[0]);
    // printf("str2 = %p \n", &str2[0]);

// Solutions
    // 1
    // int array[] = {1,2,3,4,5};
    // int *ptr = array;
    // for(int i = 0; i < 5; i++){
    //     printf("%d",ptr[i]); 
    //     // or so
    //     // printf("%d", *(ptr + i));
    // }

    // 2
    // char* str = "Murod";
    // printf("%s",str);

    // 3
    int numbers[5] = {3, 4, 5, 6, 7};
    int *ptrn = numbers;
    ptrn = ptrn + 2;
    printf("array[2] = %d\n", *ptrn); 
    ptrn = ptrn + 1;
    printf("array[3] = %d\n", *ptrn); 
    // it`s same
    // printf("%d",*(ptrn+2));
    // printf("%d",*(ptrn+3));

}