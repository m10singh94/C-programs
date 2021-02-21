// to use different string functions

#include <stdio.h>
#include <ctype.h>
int main()
{
    char buff[100];
    int i, countOfLetters = 0, countOfDigits = 0, countOfpunct = 0;
    printf("Enter the string (without space) to be analyzed\n");
    scanf("%s", buff);
    i = 0;
    while(buff[i] != '\0')
    {
        if(isalpha(buff[i]))
            countOfLetters++;
        else if(isdigit(buff[i]))
                countOfDigits++;
             else if(ispunct(buff[i]))
                    countOfpunct++;
        i++;
    }
    printf("\nThe number of letters = %d\nThe number of digits = %d\nThe number of Punctutations = %d", countOfLetters, countOfDigits, countOfpunct);
    return 0;
}