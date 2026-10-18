#include <stdio.h>
#include <math.h>

int main()
{
    int n, p;
    printf("Enter number to be powered: ");
    scanf("%d", &n);
    printf("Enter how much to be powered: ");
    scanf("%d", &p);
    int exp = (int)pow(n, p);
    printf("%d^%d: %d\n", n, p, exp);

    return 0;
}

//if not compiling compile it using this gcc filename.c -o fileoutputname -linkingHeaderFile
//in this case gcc numPOW.c -o numPOW -lm