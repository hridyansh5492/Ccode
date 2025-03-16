#include <stdio.h>
#include <string.h>

int main()
{
    char name[30];
    int age;

    printf("Enter your name: ");
    //scanf("%s", name);  
    //scanf() does not work with strings that have spaces

    //scanf("%[^\n]", name);  
    //scanf() can be used with %[^\n] to read strings with spaces

    fgets(name, 30, stdin);  
    //fgets() is used to read strings with spaces
    name[strlen(name) - 1] = '\0';  
    //remove the newline character at the end with the null character


    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Hi %s, you are %d years old.\n", name, age);
}