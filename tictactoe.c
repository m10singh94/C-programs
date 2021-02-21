// to play the game of tic-tac toe
#include <stdio.h>
#include <stdlib.h> //for system("clear")

char A[10] = {'0','1','2','3','4','5','6','7','8','9'};
int test = 1;
void drawBoard()
{
    printf("\t\tTIC-TAC TOE\n\n\tPlayer 1 (X) - Player 2 (O)\n\n");
    for(int i = 1; i <= 9; i++)
    {
        printf("  %c  ", A[i]);
        if((i%3)!=0)
            printf("|");
        else if( i != 9)
                printf("\n-----------------\n");
   }
   printf("\n");
}
int invalidEntry(int num)
{
    if((num > 9 ) || (num < 1) || (A[num] == 'X') || (A[num] == 'O'))
    {
        printf("Invalid Entry\n");
        return 1;
    }
    else 
        return 0;
}
void markBoard()
{
    int num;
    if((test % 2)!=0)
    {
    abc:printf("\nPlayer 1, enter the number : ");
        scanf("%d", &num);
        if(invalidEntry(num) == 1)    
            goto abc;
        A[num] = 'X';
    }
    else
    {
    xyz:printf("\nPlayer 2, enter the number : ");
        scanf("%d", &num);
        if(invalidEntry(num) == 1)    
            goto xyz;
        A[num] = 'O';
    }
    system("cls");
    drawBoard();
}
int checkForWin()
{
    if((A[1] == A[2] & A[2] == A[3]) || (A[4] == A[5] & A[5] == A[6]) || (A[7] == A[8] & A[8] == A[9]) ||
    (A[1] == A[4] & A[4] == A[7]) || (A[2] == A[5] & A[5] == A[8]) || (A[3] == A[6] & A[6] == A[9]) ||
    (A[1] == A[5] & A[5] == A[9]) || (A[3] == A[5] & A[5] == A[7]))
        return 1;
    else
        return 0;
    
}
int main()
{
    drawBoard();
    while((checkForWin() != 1) && test <= 9)
    {
        markBoard();
        test++;
    }
    if(test == 10)
        printf("\nMatch Draw\n\n");
    else if((test < 10) || (test % 2 == 1))
            printf("\nPlayer 1 wins. Congratulations!!\n\n");
        else 
            printf("\nPlayer 2 wins. Congratulations!!\n\n");
    return 0;
}