// to take a string as the input and display it using dynamic memory allocation i.e. malloc()
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num;
    char *str;
    printf(" Enter the number of bytes : ");
    scanf("%d", &num);
    str = (char *)malloc(num * sizeof(char));
    if(str != NULL)
    {
        printf("Enter the string -> ");
        scanf(" ");
        gets(str);
        printf("String = %s", str);
    }
    free(str);
    str = NULL;
    return 0;
}