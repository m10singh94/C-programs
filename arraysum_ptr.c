/**************************************************************
 to caluculate the sum of elements of an array using pointers
**************************************************************/
#include <stdio.h>
int arraySum( int arr[], const int num)
{
    int *ptr, sum =0;
    int *const arrEnd = arr + num;
    for(ptr = arr; ptr < arrEnd; ptr++)
        sum += *ptr;
    return sum;
}
int main()
{
    int arr[20], num;
    printf("Enter the number of elements you want to enter to compute the sum: ");
    scanf(" %d", &num);
    printf("Enter the array elements ->\n");
    for(int i = 0; i < num; i++)
        scanf(" %d", &arr[i]);
    printf("The sum of the elemnts of array = %d", arraySum(arr, num));
    return 0;
}