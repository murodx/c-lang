#include <stdio.h>
#include "account.h"

int main() {
    for (size_t i = 0; i < ACCOUNT_NUMBER; i++)
    {
        char *username = getUserName(i);
        if (username[0] == 'T'){
            printf("%s\n",username);
        }
        
    }
    
}