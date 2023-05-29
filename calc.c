#include <stdio.h>

int main()
{
    double digit1;
    double digit2;
    char symbol;
    double result;

    printf("Enter value: ");
    scanf("%lf", &digit1);

    printf("Enter value: ");
    scanf("%lf", &digit2);

    printf("Enter symbol (+ _ * /): ");
    scanf(" %c", &symbol);
    
    switch(symbol)
    {
        case '+':
            result = digit1 + digit2;
            printf("Equals to : %.1f\n", result);
            break;
        case '-':
            result = digit1 - digit2;
            printf("Equals to : %.1f\n", result);
            break;
        case '*':
            result = digit1 * digit2;
            printf("Equals to : %.1f\n", result);
            break;
        case '/':
            result = digit1 / digit2;
            printf("Equals to : %.1f \n", result);
            break;
        default:
            printf("Syntax Error");
            break;
    }
    return 0;
}