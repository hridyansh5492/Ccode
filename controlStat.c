#include <stdio.h>

int main()
{
    
    //if - else - else if is used to check or give condition to the program
    /*
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age>=18)
    {
        printf("You are an adult.\n");
    }
    else if (age>=13)
    {
        printf("You are a teenager.\n");
    }
    else if (age == 0)
    {
        printf("You are only born.\n");
    }
    else if (age<0)
    {
        printf("You are not born yet.\n");
    }
    else
    {
        printf("You are a child.\n");
    }
    */

    //switch case is an alternative to if-else
    /*
    int day;
    printf("Enter a number (1-7): "); // 1-7
    scanf("%d", &day);  
    switch (day)
    {
    case 1:
        printf("Monday\n");
        break;
    case 2:
        printf("Tuesday\n");
        break;
    case 3:
        printf("Wednesday\n");
        break;
    case 4:
        printf("Thursday\n");
        break;
    case 5:
        printf("Friday\n");
        break;
    case 6:
        printf("Saturday\n");
        break;
    case 7:
        printf("Sunday\n");
        break;
    default:
        printf("Invalid input\n");
        break;
    }
    */

    //for loop repaeats a piece of code a specified number of times
    /*
    for (int i = 0//initialization; i < 5//condition; i++//updation)
    {
        printf("Hello World\n");
    }
    */

    //while loop repeats a piece of code as long as the condition is true
    /*
    int i = 0;
    while (i < 5)
    {
        printf("Hello World\n");
        i++;
    }
    */

    //do-while loop is similar to while loop but the difference is that it will execute the code at least once
    /*
    int i = 0;
    do
    {
        printf("Hello World\n");
        i++;
    } while (i < 5);
    */

    //nested loop is a loop inside a loop
    /*
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("i = %d, j = %d\n", i, j);
        }
    }
    */  
}