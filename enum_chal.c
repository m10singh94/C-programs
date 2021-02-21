// to perform challenge on enum type
#include <stdio.h>

int main()
{
    enum company {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};
    enum company c1 = XEROX, c2 = GOOGLE, c3 = EBAY;
    printf("XEROX = %d \nGOOGLE = %d \nEBAY = %d", c1, c2, c3);
    return 0;
}