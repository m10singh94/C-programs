// to read contents of a file, then convert it to upper case in a temporary file, rename it to that
// of original and remove the first one.
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    FILE *pfile = NULL, *ptemp = NULL;
    char ch;
    int value;
    pfile = fopen("file.txt", "r");
    ptemp = fopen("temp.txt", "w+");
    if(pfile == NULL)
    {
        perror("Error in opening the file\n");
        return -1;
    }
    if(ptemp == NULL)
    {
        perror("Error in opening the file\n");
        return -1;
    }
    while((ch = fgetc(pfile)) != EOF)
    {
        if(islower(ch))
            fputc(toupper(ch), ptemp);
        else
            fputc(ch, ptemp);        
    }
    rewind(ptemp);
    while((ch = fgetc(ptemp)) != EOF)
        printf("%c", ch);
    printf("\n");
    fclose(pfile);
    fclose(ptemp);
    pfile = ptemp = NULL;
    remove("file.txt");
    value = rename("temp.txt", "file.txt");
    if(value == 0)
        printf("\nName changed successfully\n");
    else
        printf("\nError in changing the file name\n");
    system("pause");
    return 0;
}