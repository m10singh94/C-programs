// to use the strtok() function to tokenize the string

#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "Hello how are you-my name is-Maitreyi";
    const char s[2] = "-";
    char *token;
    // to get the first token
    token = strtok(str,s);
    //to get the rest of the token
    while( token != NULL)
    {
        printf("%s\n", token);
        token = strtok(NULL,s);
    }
}