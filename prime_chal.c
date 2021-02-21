// to print prime numbers between 3-100
#include <stdio.h>
// int main()
// {
//     int primes[50] = {2,3};
//     int i, j, p = 2;
//     for(i = 5; i < 100; i += 2) // i+=2 because even numbers can never be prime. hence not checking even numbers
//     {
//         /*A better approach is based on the fact that one of the divisors must 
//         be smaller than or equal to √n. So we check for divisibility only till √n. */
//         for(j = 2; j <= (i / 2) && i%j != 0; j++);
//         if(j > (i / 2))
//         {
//             primes[p] = i;
//             p++;
//         }
//     }
//     printf("Prime numbers between 3 - 100 are: ");
//     for(i = 0; i < p; i++)
//         printf("%3d", primes[i]);
//     return 0;        
// }
int main()
{
    int primes[50] = {2,3};
    int i, j, p = 2;
    for(i = 5; i < 100; i += 2)
    {   for(j = 0; j < p; j++) // prime number can be detected by dividing the number by earlier 
        {                      // prime numbers. 
            if(i % primes[j] == 0)
                break;
        }
        if(j == p)
        {
            primes[p] = i;
            p++;
        }
    }
    printf("Prime numbers between 3 - 100 are: ");
    for(i = 0; i < p; i++)
        printf("%3d", primes[i]);
    return 0;
}