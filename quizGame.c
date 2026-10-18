#include <stdio.h>
#include <ctype.h>

int main()
{
    char ques[][100] = {"1. What is name of founder of C?",
                        "2. When was C founded?",
                        "3. What is the extension of C file?"};

    char opts[][100] = {"A. Dennis Ritchie", "B. Robin Thompson", "C. Linus Trovalds", "D. Guido Van Rossum",
                        "A. 1975", "B. 1979", "C. 1972", "D. 1980",
                        "A. .cpp", "B. .txt", "C. .c", "D. .py"};

    char ans[3] = {'A', 'C', 'C'};

    char guess;
    int score;

    printf("************QUIZ GAME*************");
    for(int i = 0; i < sizeof(ques)/sizeof(ques[0]); i++)
    {
        printf("\n%s\n", ques[i]);
        for(int j = (i * 4); j < (i * 4) + 4; j++)
        {
            printf("%s\n", opts[j]);
        }

        printf("Guess: ");
        scanf("%c", &guess);
        getchar();

        guess = toupper(guess);

        if(guess == ans[i])
        {
            printf("CORRECT!!!\n");
            score++;
        }
        else
        {
            printf("WRONG!!!\n");
        }
    }
    printf("Final Score: %d/3.\n", score);
}