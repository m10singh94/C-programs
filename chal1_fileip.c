// challenge : to find the number of lines in a file
#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *pfile = NULL;
    int c = 0;
    char ch;
    pfile = fopen("file.txt", "r");
    if(pfile == NULL)
    {
        perror("Error in opening the file.");
        return -1;
    }
    while((ch = fgetc(pfile)) != EOF)
    {
        if(ch == '\n')
            c++;
    }
    printf("The number of lines in the file \"file.txt\" is %d", c + 1);
    fclose(pfile);
    pfile = NULL;
    return 0;
}