#include <stdio.h>

int main()
{
    char op;
    double n1, n2, result;
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &op);

    printf("Enter 1st operand:");
    scanf("%lf", &n1);
    printf("Enter 2nd operand:");
    scanf("%lf", &n2);

    switch (op)
    {
    case '+':
        result = n1 + n2;
        printf("Sum is %.2lf.\n", result);
        break;
    case '-':
        result = n1 - n2;
        printf("Difference is %.2lf.\n", result);
        break;
    case '*':
        result = n1 * n2;
        printf("Product is %.2lf.\n", result);
        break;
    case '/':
        result = n1 / n2;
        printf("Quotient is %.2lf.\n", result);
        break;
    default:
        printf("Invalid operator");
    }

    return 0;
}