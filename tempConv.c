#include <stdio.h>
#include <ctype.h>

int main()
{
    char unit;
    float temp;
    printf("Enter the unit of temperature (C/F): ");
    scanf("%c", &unit);

    unit = toupper(unit);

    if(unit == 'C')
    {
        printf("The temerature is currently in Celsius.");
        printf("Enter the temperature in Celsius: ");
        scanf("%f", &temp);
        temp = (temp * 9 / 5) + 32;
        printf("The temperature in Farhenheit is %.1f F.\n", temp);
    }
    else if(unit == 'F')
    {
        printf("The temerature is currently in Farhenheit.");
        printf("Enter the temperature in Farhenheit: ");
        scanf("%f", &temp);
        temp = ((temp - 32)* 5) / 9;
        printf("The temperature in Celsius is %.1f C.\n", temp);
    }
    else
    {
        printf("Invalid unit.\n");
    }

    return 0;
}