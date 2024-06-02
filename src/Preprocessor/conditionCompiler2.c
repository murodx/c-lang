// // #include <stdio.h>
// // #define DEBUG
 
// // int main(void)
// // {
// // #ifdef DEBUG
// //     printf("Debug mode");
// // #endif
// //     return 0;
// // }

// #include <stdio.h>
// //#define DEBUG
 
// int main(void)
// {
// #ifndef DEBUG
//     printf("Production mode");
// #else
//     printf("Debug mode");
// #endif
//     return 0;
// }

#include <stdio.h>
#define BETA
#define DEBUG
 
int main(void)
{
#if defined DEBUG && !defined BETA
    printf("debug mode; final version");
#elif defined DEBUG && defined BETA
    printf("debug mode; beta version");
#else
    printf("undefined mode");
#endif
    return 0;
}