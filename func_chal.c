/* to use three functions :
1> to calculate gcd
2> to find the absolute of any number
3> to find the sqrt of a number */

#include <stdio.h>
int gcd(int num1, int num2)
{
    int gcd;
    for( int i = 2; i <= num1 && i <= num2; i++)
        if(num1 % i == 0 && num2 % i == 0)
            gcd = i;
    return gcd;
}
float absolute(float num)
{
    if(num < 0)
        return (num * -1);
    else
        return num;
}
int squarert(int num)
{
    int i;
    for(i = 1; i < num; i++)
    {
        if(i*i == num)
            break;
    }
    return i;
}
int main()
{
    int num1, num2;
    float num;
    char ch;
    printf("what do you want to do?(Choose a character)\n");
    printf("a> Find the Greatest Common Divisor of two integers\nb> Find the absolute of a number\nc> find the sqrt of a integer\n");
    printf("\n");
    scanf("%c", &ch);
    switch(ch)
    {
        case 'a' : printf("\nEnter two numbers whose greatest common factor has to be calculated : ");
                    scanf("%d %d", &num1, &num2);
                    printf("\nthe greatest common factor of %d and %d is : %d", num1, num2, gcd(num1, num2));
                    break;
        case 'b' : printf("\nEnter the number whose absolute value has to be determined : ");
                    scanf("%f", &num);
                    printf("\nThe absolute value of %f is %f",num, absolute(num));
                    break;
        case 'c' : printf("\nEnter the number whose square root has to be calculated : ");
                    scanf("%d", &num1);
                    printf("The square root of %d is %d", num1, squarert(num1));
    }
    return 0;
}