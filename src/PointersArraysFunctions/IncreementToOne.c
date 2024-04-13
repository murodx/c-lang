// #include <stdio.h>
 
// void increment(int x)
// {
//     x = x + 1;
//     printf("increment function: %d \n", x);
// }
 
// int main(void)
// {
//     int n = 10;
//     increment(n);
//     printf("main function: %d \n", n);
//     return 0;
// }

#include <stdio.h>

void calculate(int x, int y, char operation) {
    switch(operation) {
        case '+':
            printf("%d + %d = %d",x,y, x + y);
            break;
        case '-':
            printf("%d - %d = %d",x,y, x - y);
              break;
        case '*':
            printf("%d * %d = %d",x,y, x * y);
              break;
        case '/':
            if (y != 0) // Check if y is not zero to avoid division by zero
                printf("%d / %d = %d",x,y, x / y);
            else {
                printf("Error: Division by zero\n");
                return ; // Return 0 in case of division by zero
            }
        default:
            printf("Error: Invalid operation\n");
            return; // Return 0 for invalid operation
    }
}
int main(void){
    int x;
    int y;
    char opeartion;
    printf("Enter x: ");
    scanf("%d",&x);
    char ch = getchar();
    printf("Enter opeartion: ");
    scanf("%c",&opeartion);
    printf("Enter y: ");
    scanf("%d",&y);
   
    if(ch == '\n'){
        printf("This is a C\n");
    }
   
    calculate(x,y,opeartion);

}