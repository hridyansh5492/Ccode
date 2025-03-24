#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    /*pseudo random numbers are a set of values or 
    elements that are statistically random
    (Don't use these for any sort of cryptographic security)*/

    srand(time(0)); //seed to generate rand numbers;

    int num1 = (rand() % 6) + 1; //rand function generates number between 0 to 32,767 and to round off to 6 we are doing this
    int num2 = (rand() % 6) + 1;

    printf("%d\n", num1);
    printf("%d\n", num2);

    return 0;
}