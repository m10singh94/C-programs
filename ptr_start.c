/***********************************************************************
  to create, initialize and access a pointer and display their values
***********************************************************************/

#include <stdio.h>
#include <stddef.h>

int main()
{
    int var = 22;
    int *ptr = NULL;
    ptr = &var;
    printf("The value of var = %d\n", var);
    printf("The address of var = %p\n", &var);
    printf("The value of ptr = %p\n", ptr);
    printf("The address of ptr = %p\n", (void*)&ptr);
    printf("The pointer 'ptr' is pointing to = %d\n", *ptr);
    return 0;
}