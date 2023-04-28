#include <stdio.h>
#include <ctype.h>

int main()
{
    char unit;
    float temp;

    printf("Is the temperature in (F) or (C)? ");
    scanf("%c", &unit);

    if(unit == 'C')
    {
        printf("Enter the temperature in Celsius: ");
        scanf("%f", &temp);
        temp = (temp * 9 / 5) + 32;
        printf("The temperature in Farenheit is: %.1f", temp);
        
        if(temp >= 1)
        {
            printf("\nI love Farenheit");
        }
        else if (temp < 1)
        {
            printf("\nIt's Farenheit sha");
        }        
    }
    else if(unit == 'F')
    {
        printf("Enter the temperature in Farenheit: ");
        scanf("%f", &temp);
        temp = ((temp - 32) * 5) / 9;
        printf("The temperature in Celsius is: %.1f", temp);

        if(temp >= 1)
        {
            printf("\nI love Celsius");
        }
        else if (temp < 1)
        {
            printf("\nIt's Celsius sha");
        }        
    }
    else
    {
        printf("Invalid Input");
    }
    return 0;
}



