#include <stdio.h>

union my_uni
{
    int x;
    char name[20];
};
/*union only allocate memory enough for largest
element, all elements in union lay one above another
and share same memory space*/

int main()
{
    union my_uni Uni;
    printf("Size of my_uni is %d bytes.\n", sizeof(Uni));

    return 0;
}