// to print from a file in reverse order
#include <stdio.h>
#include <stdlib.h>
#define FILENAME "file.txt"
int main()
{
    FILE *fp = NULL;
    int len, count = 0;
    fp = fopen(FILENAME, "r");
    if(fp == NULL)
        return -1;
    fseek(fp, count, SEEK_END);
    len = ftell(fp);
    while(count != len)
    {
        count++;
        fseek(fp, -count, SEEK_END);
        printf("%c", fgetc(fp));
    }
    printf("\n");
    fclose(fp);
    fp = NULL;
    system("pause");
    return 0;
}