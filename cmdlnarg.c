// printing command line arguments
#include <stdio.h>

int main(int argc, char *argv[])
{
    int noa = argc;
    char *ar1 = argv[0];
    char *ar2 = argv[1];
    printf("number of arguments = %d\n",noa);
    printf("name of the program = %s\n",ar1);
    printf("argument 2 is the command line argument = %s\n",ar2);
    return 0;
}
