#include <stddef.h>
#include <stdio.h>

int main(void) {
  // int a = 10;
  // int b = 23;
  // int *pa = &a;
  // int *pb = &b;
  // ptrdiff_t c = pa - pb;  // разница между адресами
  // printf("pa=%p \n", (void*)pa);
  // printf("pb=%p \n", (void*)pb);
  // printf("c=%ld \n", c);

  int a = 10;
  int *pa = &a;
  printf("pa: address=%p \t value=%d \n", (void *)pa, *pa);
//   int b = *pa++; // инкремент адреса указателя сперва 
//   int b = (*pa)++; //  сначала выполняется операция разыменования и получение значения, затем это значение увеличивается на 1
//   int b = ++*pa; // сначала с помощью операции разыменования получаем значение по адресу из указателя pa, к этому значению прибавляется единица
//   int b = *++pa; // сначала изменяет адрес в указателе, затем мы получаем по этому адресу значение // значение в этом случае может быть неопределенным:
  printf("b: value=%d \n", b); 
  printf("pa: address=%p \t value=%d \n", (void *)pa, *pa);
}