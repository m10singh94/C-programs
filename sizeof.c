// to check the size of various data types : int, char, long, long long, double, long double

#include <stdio.h>
int main()
{
    int s1, s2, s3, s4, s5, s6;
    s1 = sizeof(int);
    s2 = sizeof(char);
    s3 = sizeof(long);
    s4 = sizeof(long long);
    s5 = sizeof(double);
    s6 = sizeof(long double);
    printf("The size of\nint : %u\nchar : %u\nlong : %u\nlong long : %u\ndouble : %u\nlong double : %u",s1, s2, s3, s4, s5, s6);
    return 0;
}