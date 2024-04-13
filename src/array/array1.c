#include <stdio.h>


int main(){
    // char str[] = {"XayitCHyort"};
    // // printf("%ld\n",sizeof(str));
    // printf("%s",str);
    // // for(int i = 0; str[i] != '\0'; i++){
    // //     printf("%s\n",str);
    // // }


    // int numbers[] = {1, 2, 3, 4};
    // numbers[0] = numbers[0] * 2;
    // numbers[3] = numbers[3] * 2;
    // for(int i = 0; i < 4;i++){
    //     printf("%d",numbers[i]);
    // }
    // return 0;

    // for(int i = 0; i < 4; i++){
    //     numbers[i] = numbers[i] * 2;
    //     printf("%d\n",numbers[i]);
    // }

    int numbers[] = {1, 2, 3, 4, 5};


    int n = sizeof(numbers) / sizeof(numbers[0]);

    int m = n / 2;


    for(int i = 0; i < m; i++){
        int temp = numbers[i];
        printf("%d\n",temp);
        numbers[i] = numbers[n-i-1];
         numbers[n-i-1] = temp;
    }
    for(int i = 0;i < n; i++){
        printf("%d",numbers[i]);
    }
    return 0;



}