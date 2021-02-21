// to calculate the gross pay, taxes and net pay from the user entered working hours

// better to use define preprocessor directive

#include <stdio.h>
int main()
{
    int hrs;
    float pay, tax;
    printf("Enter the number of working hours : ");
    scanf("%d", &hrs);
    // calculating overtime
    if(hrs>40)
        pay = (40 * 12) + ((hrs - 40)* 1.5 * 12);
    else
        pay = hrs * 12; 
    // calculating tax
    if(pay <= 300)
        tax = 0.15 * pay;
    else if(pay > 300 && pay <= 450)
        tax = (300 * 0.15) + ((pay - 300) * 0.2);
        else
        {
            tax = (300 * 0.15) + (150 * 0.2) + ((pay - 450) * 0.25);
        }
    printf("The gross salary : %.2f\n", pay);
    printf("Tax              : %.2f\n", tax);
    printf("The net salary   : %.2f", pay - tax);
    return 0;
}