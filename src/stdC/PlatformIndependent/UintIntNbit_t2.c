#include <stdio.h>
#include <inttypes.h>
 
 
int main(void)
{
    int64_t int64;
    uint64_t uint64;
 
    printf("Enter signed number: ");
    scanf("%"SCNi64, &int64);
 
    printf("Enter unsigned number: ");
    scanf("%"SCNu64, &uint64);
 
    printf("int64 = %" PRIi64 "\n", int64);
    printf("uint64 = %" PRIu64 "\n", uint64);
      
    return 0;
}