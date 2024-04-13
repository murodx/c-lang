#include <stdio.h>


void str_printf(char message[]){
    printf(message);
}
void swap(int *a,int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(){
    print_message("Hello \n");
    print_message("Bye \n");
    int a = 2;
    int b = 3;
    swap(&a,&b);
    printf("%d %d",a,b);

}