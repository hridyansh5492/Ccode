#include <stdio.h>
#include <string.h>

//function is a small section of code which is executed when we call it also called invoking function.

//function prototype is func declaration without the body before main function
//ensures calls are made with correct arguments
//many compilers don't check parameter matching
//missing parameters/arguments can cause undefined behavior or fill memory with garbage values
//it cause compiler to to flag errors if arguments are missing

//function prototype
void func(char[]);

//declaring and defining a function
void func(char name[])  //anything needed to be passed to a function or what is needed in order tobe executed is called parameter, which are preceded by data type
{
    printf("Hello, %s!\n", name);

}

int main() {
    char name[30];
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';  //removing newline character

    //calling function 3 times
    func(name);  //anything inside the brackets or what we are passing into a finction is called argument
    func(name);
    func(name);

    /*when passing arguments we need matching set of
    parameters, name don't have to be same but data
    type and order of arguments should be same
    
    arguments and parameters advantage is that the
    functions can talk to each other and share data
    because they can't access each other's variables
    and see inside each other
    
    when you have variables you can pass them to another function as arguments
    */

    return 0;  //returns a value to the function that called it
}

