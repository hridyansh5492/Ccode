#include <stdio.h>

int main()
{
    /*
    variables are type of containers that stores values,we need to declare the type data before storing the value.

    Some rules for declaring variables are:
    1. don't use keywords.
    2. don't use special characters except underscore(_).
    3. first letters should be alphabet or underscore.
    4. don't use spaces.
    5. don't use digits at start.
    6. don't use more than 31 characters variables/identifiers.
    7. don't use more than 63 characters for function names.
    */
    int x; //declaration of var x
    x = 9; //initialization of var x
    int y = 10; //declaration + initialization

    int age = 19;
    float gpa = 7.5;
    char grade = 'B';
    char name[] = "Bro";

    printf("Hello, %s.\n", name);
    printf("You are %d years old.\n", age);
    printf("Your gpa is %.2f.\n", gpa);
    printf("Your grade is %c.\n", grade);

    /*
    Format specifiers are used the value contained by the variables.
    %d for integer, %f for float, %c for character, %s for string.
    */
}