#include <stdio.h>
#include <math.h>

int main()
{
    double b, p, h;
    printf("Enter the base of right triangle: ");
    scanf("%lf", &b);
    printf("Enter the perpendicular of right triangle: ");
    scanf("%lf", &p);
    h = sqrt(b * b + p * p);
    printf("The hypotenuse of right triangle is %lf units.\n", h);
    return 0;
}