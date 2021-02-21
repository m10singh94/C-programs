// to read from a text file
#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *pfile;
    char str[61];
    pfile = fopen("file.txt","r");
    if(pfile == NULL)
    {
        perror("Error in opening the file");
        return (-1);
    } 
    // while((c = fgetc(pfile)) != EOF)
    //     printf("%c", c);
    if(fgets(str, 60, pfile) != NULL)
        printf("%s", str);
    fclose(pfile);
    pfile = NULL;
    system("pause");
    return 0;   
}