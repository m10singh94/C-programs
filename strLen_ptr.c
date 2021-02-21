// to compute the length of a string using pointer
#include<stdio.h>
int strLen(const char *arr)
{
    const char *beg = arr;
    while(*arr)
        arr++;
    return(arr-beg);
}
int main()
{
    char *arr = "Hello, how are you"; //you can also use char arr[] = "Hello, how are you";
    int num;
    printf("The length of the string 'Hello, how are you' is : %d\n", strLen(arr));
    printf("the length of \"\" is : %d\n", strLen(""));
    printf("The length of 'Maitreyi' is : %d", strLen("Maitreyi"));
    return 0;
}