// SNAKE,WATER,GUN//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int player, computer = rand() % 3;
    /*
    0-->snake
    1-->water
    2-->gun
    */
    printf("Choose 0 for snake,1 for water and 2 for gun\n");
    scanf("%d", &player);
    printf(" computer choose %d\n", computer);

    if (player == 0 && computer == 0)
    {
        printf("Its a draw!\n");
    }
    else if (player == 0 && computer == 1)
    {
        printf("You win!\n");
    }
    else if (player == 0 && computer == 2)
    {
        printf("You lose!\n");
    }
    else if (player == 1 && computer == 0)
    {
        printf("You lose!\n");
    }
    else if (player == 1 && computer == 1)
    {
        printf("Its a draw!\n");
    }
    else if (player == 1 && computer == 2)
    {
        printf("You win!\n");
    }
    else if (player == 2 && computer == 0)
    {
        printf("You win!\n");
    }
    else if (player == 2 && computer == 1)
    {
        printf("You lose!\n");
    }
    else if (player == 2 && computer == 2)
    {
        printf("Its a draw!\n");
    }
    else
    {
        printf("Somethings went wrong!");
    }
    return 0;
}