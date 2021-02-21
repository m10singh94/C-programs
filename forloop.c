// checking postfix and prefix increment operator
#include <stdio.h>
int main()
{
    for( int i=1, j=2; i <= 5; ++i, j +=2)
        printf("%5d", i*j);
    printf("\n");
    for( int i=1, j=2; i <= 5; i++, j +=2)
        printf("%5d", i*j);
    return 0;
}