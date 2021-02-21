/******************************************************
=> to write function to count the length of the string
=> to concatenate strings
=> to compare strings
******************************************************/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int countch( char str[] )
{
    int i = 0;
    while(str[i] != '\0')
        i++;
    return i;
}
void concat(char str1[], char str2[], char result[])
{
    int i;
    for( i = 0; str1[i] != '\0'; i++)
        result[i] = str1[i];
    for(int j = 0; str2[j] != '\0'; j++)
        result[i++] = str2[j];
    printf("The first string is \"%s\"\nThe second string is \"%s\"\nThe concatenated string is \"%s\"", str1, str2, result);
}
bool compstr(char str1[], char str2[])
{
    int i = 0, temp1, temp2;
    temp1 = countch(str1);
    temp2 = countch(str2);
    if(temp1 > temp2 || temp1 < temp2)
        return false;
    else
    {
        while(str1[i] != '\0')
        {   
            if(str1[i] != str2[i])
                break;
            i++;
        }
        if(str1[i] != '\0')
            return false;
        else
            return true;
    }   
}
int main()
{
    system("cls");
    char ch, ans, str1[100], str2[100], result[200];
    do
    {
        printf("Choose one of the option\na) To count the length of a string.\nb) To concatenate two strings.\nc) To compare two strings.\n\n");
        scanf(" %c", &ch);
        switch(ch)
        {
            case 'a' : printf("Enter the string whose length has to be determined :\n");
                        scanf("%s", str1);
                        printf("\nThe length of the given string is %d", countch(str1));
                        break;
            case 'b' : printf("Enter the first string :\n");
                        scanf("%s", str1);
                        printf("Enter the second string :\n"); 
                        scanf("%s", str2);
                        concat(str1, str2, result);
                        break;
            case 'c' : printf("Enter the first string :\n");
                        scanf("%s", str1);
                        printf("Enter the second string :\n"); 
                        scanf("%s", str2);
                        printf("The two strings %s equal.\n", compstr(str1, str2) == true ? "are" : "are not");
                        break;
            default : printf("Invalid option.\n");
        }
        printf("\nDo you want to continue? (Y/N) : \n");
        scanf(" %c", &ans);
    }while((ans == 'y') || (ans == 'Y'));
    return 0;
}