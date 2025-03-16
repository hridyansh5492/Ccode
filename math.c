#include <stdio.h>
#include <math.h>

int main()
{
    double a = sqrt(25);
    double b = pow(2, 3);
    double c = ceil(36.356);
    int d = round(36.356);
    int e = floor(36.356);
    int f = ceil(36.356);
    double g = fabs(-36.356);
    double h = fmod(10, 3);
    double i = log(2.71828);
    double j = log10(100);
    double k = exp(1);
    double l = sin(1.5708);
    double m = cos(0);
    double n = tan(0.7854);

    printf("sqrt(25) = %lf\n", a);
    printf("pow(2, 3) = %lf\n", b);
    printf("ceil(36.356) = %lf\n", c);
    printf("round(36.356) = %d\n", d);
    printf("floor(36.356) = %d\n", e);
    printf("ceil(36.356) = %d\n", f);
    printf("fabs(-36.356) = %lf\n", g);
    printf("fmod(10, 3) = %lf\n", h);
    printf("log(2.71828) = %lf\n", i);
    printf("log10(100) = %lf\n", j);
    printf("exp(1) = %lf\n", k);
    printf("sin(1.5708) = %lf\n", l);
    printf("cos(0) = %lf\n", m);
    printf("tan(0.7854) = %lf\n", n);

    return 0;
}