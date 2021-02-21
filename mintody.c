// challenge : to convert minutes into days and years

#include <stdio.h>

int main()
{
    long int min;
    double days, years;
    printf("enter the number of minutes to be converted into days and years : ");
    scanf("%d", &min);
    days = (double)min/(60*24);
    years = days/365;
    printf("Number of days = %.2f\n Number of years = %.2f", days, years);
    return 0;
}