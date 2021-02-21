// to calculate the square of a number using pointer
#include <stdio.h>
void square(int num, int *sqr);
int main()
{
    int num, sqr;
    printf("Enter the number whose square is to be calculated : ");
    scanf("%d", &num);
    square(num, &sqr);
    printf("The square of '%d' is = %d", num, sqr);
    return 0;
}
void square(int num, int *sqr)
{
    *sqr = num * num;
}
