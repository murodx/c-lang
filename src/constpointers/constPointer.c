#include <stdio.h>

int main(void) {
// Pointers to constants || Указатели на константы
  // const int a = 10;
  // const int *pa = &a;
  // printf("address=%p \t value=%d \n", pa, *pa);

  // pointer is const but value is not const

  // int a = 10;
  // const int *pa = &a;
  // printf("value=%d \n", *pa);     // 10
  // // we do change a value
  // a = 22;
  // printf("value=%d \n", *pa);     // 22
  // // but not through pointers
  // //*pa = 34;     // так делать нельзя

//   int a = 10;
//   const int *pa = &a; // указатель указывает на переменную a
//   // through pointer to const we can`t change variable value/constant
//   // for example *pa = 20;
//   const int b = 45;
//   // but we can assign to pointer addres of any values or constant
//   // for example
//   pa = &b; // указатель указывает на константу b
//   printf("%d \n",*pa);

// Constant pointers || Константные указатели
// Они не могут изменять адрес, который в них хранится, но могут изменять значение по этому адресу.
    // int a = 10;
    // int *const pa = &a;
    // printf("value=%d \n", *pa);     // 10
    // *pa = 22;                       // меняем значение
    // printf("value=%d \n", *pa);     // 22
    
    // int b = 45;
    // // pa = &b;         так нельзя сделать

// Constant pointer to constant
    // И объединение обоих предыдущих случаев - константный указатель на константу, который не позволяет менять ни хранимый в нем адрес, ни значение по этому адресу:

    // int a = 10;
    // const int *const pa = &a;
    
    // //*pa = 22;  так сделать нельзя
    
    // int b = 45;
    // // pa = &b;  так сделать нельзя 


    const long n = 10;
    // pointer to const
    const long *pn = &n;


    char *const hello = "Hello";
    printf("Constant: %ld\n", *pn); // Constant: 123
    printf("Const pointer: %s\n", hello);       // Const pointer: Hello

}