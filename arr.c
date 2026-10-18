#include <stdio.h>

int main()
{
    //array is a data structure that stores a collection of elements of the same data type

    char _n;
    int chk; //v
    char iName[] = {'b', 'c', 'p', 'P'};
    double iPrice[] = {10.0, 20.0, 50.0, 80.0};

    for(int i=0; i<sizeof(iName)/sizeof(iName[0]); i++)
    {
        printf("Item %d: %c\n",i+1, iName[i]);
    }

    printf("Enter the item to tell price of: ");
    scanf(" %c", &_n);  // Add a space before %c to consume any lingering whitespace characters

    for(int i=0; i<sizeof(iName)/sizeof(iName[0]); i++)
    {
        if(_n==iName[i])
        {
            chk = i;
            break;
        }
    }

    /*for(int i=0; i<sizeof(iPrice)/sizeof(iPrice[0]); i++)
    {
        if(chk==iPrice[i+1]) // problem: i+1 is out of bounds
        {
            v = i;
            break;
        }
    }
    printf("The price of item %c is %.2lf.\n", _n, iPrice[chk]);
    */

    // Output the price of the found item
    if (chk >= 0 && chk < sizeof(iPrice) / sizeof(iPrice[0])) {
        printf("The price of item %c is %.2lf.\n", _n, iPrice[chk]);
    } else {
        printf("Item not found.\n");
    }

    return 0;
}