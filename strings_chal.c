/*****************************************
=> To write a program to reverse a string
=> To sort the strings using Bubble sort
*****************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void reverse_str(char str1[])
{
    int len, i;
    len = strlen(str1);
    printf("REVERSE STRING = ");
    for(i = len - 1; i >= 0; i--)
        printf("%c", str1[i]);
}
void str_sort(int num)
{
    char str[50][50], temp[50];
    int i, j;
    printf("Enter the strings :\n");
    for(i = 0; i < num; i++)
        scanf("%s", str[i]);
    for(i = 0; i < (num - 1); i++)
        for(j = 0; j < (num - i -1); j++)
        {
            if(strcmp(str[j],str[j+1]) == 1)
            {
                strcpy(temp, str[j]);
                strcpy(str[j], str[j+1]);
                strcpy(str[j+1], temp);
            }
        }
    printf("\nThe sorted strings are as follows :\n");
    for(i = 0; i< num; i++)
        printf("%s\n", str[i]);
}
int main()
{
    char str1[51];
    int num;
    printf("Enter the string to be reversed (max 50 characters) : ");
    scanf("%s", str1);
    reverse_str(str1);
    printf("\n\nEnter the number of strings you want to enter to perform sorting : ");
    scanf("%d", &num);
    str_sort(num);
    return 0;
}