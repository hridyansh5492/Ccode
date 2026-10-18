#include <stdio.h>

int main()
{
    /*
    pointer is a variable-like reference that holds
    a memory address to another variable, and some
    tasks are preformed more easily with pointers
    
    * is indirection operator(value at address)*/

    int n = 3;
    int *pN = &n;

    printf("Address of n: %p\n", &n);
    printf("Address of pN: %p\n", pN);

    printf("Value of n: %d\n", n);
    printf("Value of pN: %d\n", *pN);  //dereferencing

    return 0;
}

//good practice to ssign NULL, if no value is provided