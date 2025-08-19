// NUMBER GUESSING GAME //

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    // Seed the random number generator with the current time
    srand(time(0));

    // Generate a random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int guessedNumber;

    // Print the random number
    // printf("Random Number between 1 and 100: %d\n", randomNumber);

    do
    {

        printf("Guess the number");
        scanf("%d", &guessedNumber);
        if (guessedNumber > randomNumber)
        {
            printf("lower Number Please!\n");
        }
        else if (guessedNumber < randomNumber)
        {
            printf("higher Number Please!\n");
        }
        else
        {
            printf("Congrates!\n");
        }
        no_of_guesses++;

    } while (guessedNumber != randomNumber);

    printf("You guessed the number in %d guesses", no_of_guesses);

    return 0;
}
