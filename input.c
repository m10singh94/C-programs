// to test scanf() function
#include <stdio.h>

int main()
{
    char str[100];
    int i;
    printf("Enter a string and a number : ");
    scanf("%s %d", str, &i);
    printf("\nyou've entered %s %d", str, i);

    return 0;
}