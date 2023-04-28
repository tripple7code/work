#include <stdio.h>
#include <math.h>

int main()
{
    const double pi = 3.14159;
    double radius;
    double circumference;

    printf("\nEnter radius of a circle: ");
    scanf("%lf", &radius);

    circumference = 2 * pi * radius;

    printf("circumference: %lf", circumference);

    return 0;
}