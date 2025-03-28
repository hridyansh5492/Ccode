#include <stdio.h>

int main()
{
    //bitwise operators are special operators used in bit level programming

    /*
    & AND
    ^ XOR
    | OR
    >> Right Shift
    << Left Shift
    */

    int x = 6;   //00000110
    int y = 12;  //00001100
    int z = 0;   //00000000

    printf("AND: %d\n", x&y);
    printf("XOR: %d\n", x^y);
    printf("OR: %d\n", x|y);
    printf("Right Shift: %d\n", x>>y);
    printf("Left Shift: %d\n", x<<y);

    return 0;
}