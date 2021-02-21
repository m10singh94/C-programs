// allocating dynaminc memory using malloc() and realloc()
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char *str = NULL;
    str = (char *)malloc(15 * sizeof(char));   //initiaizing memory
    strcpy(str, "Maitreyi");
    printf("String = %s \tAddress = %p\n", str, str);
    str = (char *)realloc(str, 10 * sizeof(char));     // reallocating memory
    strcat(str, " Singh");
    printf("String = %s Address = %p", str, str);
    free(str);   // freeing the memory
    return 0;
}