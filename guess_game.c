// guessing a random number generated by computer
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int guess, i;
    time_t t;
    srand((unsigned)time(&t));
    int random_no = rand()%21;
    printf("\nThis is a guessing game.\nI have chosen a number between 0-20 which you must guess. You will get 5 chances\n\n");
top:i = 5; // because maximum number of attempts can be 5 only
    guess = 0;
    while(i != 0 && guess <= 20)
    {
        printf("You have %d tr%s left.\nGuess a number : ", i, i == 1? "y" : "ies");
        scanf("%d0", &guess);
        if(guess > random_no)
            printf("Sorry %d is wrong. My number is less than that.\n\n", guess);
        else if(guess < random_no)
                printf("Sorry %d is wrong. My number is more than that.\n\n", guess);
            else
            {
                printf("CONGRATULATIONS !! You guessed the right number.");
                break;
            }
        i--;
    }
    if(i == 0)
        printf("Sorry you've exhausted all your attempts.\nThe number was : %d\n", random_no);
    if(guess < 0 || guess > 20)
    {
        printf("Invalid number. Please restart and enter number between 0-20.\n");
        goto top;
    }    
    return 0;
}