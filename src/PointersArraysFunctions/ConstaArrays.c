#include <stdio.h>
  
// массив p - константный
void twice(size_t n, const int p[])
{
    for(size_t i = 0; i < n; i++)
    {
        // p[i]= p[i] * 2;  // Так нельзя - массив константный
        printf("%d \t", p[i] * 2);
    }
}
int main(void)
{
    int nums[] = {1, 2, 3, 4, 5};
    // получаем количество элементов массива
    size_t length = sizeof(nums)/sizeof(nums[0]);
    twice(length, nums);
    return 0;
}