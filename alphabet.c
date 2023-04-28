#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Enter third number: ");
    scanf("%d", &c);

    if(a > b && a > c && b > c)
    {
        printf("%d, %d, %d", a, b, c);
    }
    else if(a > b && a > c && b < c)
    {
        printf("%d, %d, %d", a, c, b);
    }
    else if(b > c && b > a && c > a)
    {
        printf("%d, %d, %d", b, c, a);
    }
    else if(b > c && b > a && c < a)
    {
        printf("%d, %d, %d", b, a, c);
    }
    else if(c > a && c > b && b > a)
    {
        printf("%d, %d, %d", c, b, a);
    }
    else if(c > a && c > b && b < a)
    {
        printf("%d, %d, %d", c, a, b);
    }
    else
    {
        printf("Matching Numbers. Check again");
    }
    return 0;
}