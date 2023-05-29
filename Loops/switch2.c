#include <stdio.h>

// switch is a great replacement to long else construct.
int main()
{
    int x;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    switch (x)
    {
    case 1:
        printf("x is 1");
        break;
    case 2:
        printf("x is 2");
        break;
    case 3:
        printf("x is 3");
        break;
    default:
        printf("x is a number other than 1, 2 and 3");
        break;
    }    
}