// use pointer to address the elements of structure.
#include <stdio.h>
struct date
{
    int day;
    int month;
    int year;
};
int main()
{
    struct date today, *ptr;
    ptr = &today;
    ptr->day = 10;
    ptr->month = 06;
    ptr->year = 1994;
    printf("Todays date is %i/%i/%.2i\n", ptr->day, (*ptr).month, (ptr->year)%100);
    return 0;
}