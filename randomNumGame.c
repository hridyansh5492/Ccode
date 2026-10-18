#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    const int MIN = 1;
    const int MAX = 100;
    int answer;
    int guess;
    int guesses;

    srand(time(0)); //seed to generate rand numbers

    answer = (rand() % MAX) + MIN;

    do
    {
        printf("Guess a number: ");
        scanf("%d", &guess);
        if(guess > answer)
        {
            printf("TOO HIGH!!!\n");
        }
        else if(guess < answer)
        {
            printf("TOO LOW!!!\n");
        }
        else
        {
            printf("CORRECT!!!\n");
        }
        guesses++;
    } while (guess != answer);

    printf("Answer was %d.\n", answer);
    printf("You took %d guesses to answer it.\n", guesses);
    
    return 0;
}