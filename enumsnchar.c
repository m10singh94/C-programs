// to check enum and bool types
#include <stdio.h>
#include <stdbool.h>

int main()
{
    enum gender {male, female};
    enum gender mygender = male, yourgender = female;
    bool chk = (mygender==yourgender);
    printf("%d",chk);
    return 0;
}