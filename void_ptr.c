// to see the usage of the void pointer

#include <stdio.h>
int main()
{
    int i = 10;
    float f = 2.34;
    char ch = 'm';

    void *ptr = &i;
    printf("The value of 'i' = %d\n", *(int *)ptr);
    ptr = &f;
    printf("The value of 'f' = %.2f\n", *(float *)ptr);
    ptr = &ch;
    printf("The value of 'ch' = %c\n", *(char *)ptr);
    return 0;
}