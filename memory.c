#include <stdio.h>

int main()
{
    /*
    memory is an array of bytes within RAM(street),
    memory block is a single unit(byte) within memory, used to hold some value(person),
    memory address is the address of where a memory block is located at(home address)
    */

    char a = 'X';
    printf("%d bytes\n", sizeof(a));
    printf("%p\n", &a);

    return 0;
}