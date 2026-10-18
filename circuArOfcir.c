#include <stdio.h>
#include <math.h>

int main()
{
    const double PI = 3.14159;
    double r;
    printf("Enter radius of the circle: ");
    scanf("%lf", &r);
    double circu = 2 * PI * r;
    printf("The circumference of the circle of the given radius is %lf units.\n", circu);
    double area = PI * pow(r, 2);
    printf("The area of the circle of the given radius is %lf square units.\n", area);

    return 0;
}