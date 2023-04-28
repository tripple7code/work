#include <stdio.h>

int main()
{
    int age;

    printf("Enter age: ");
    scanf("%d", &age);

    if(age >= 18)
    {
        printf("You are now signed up!");
    }
    else if(age == 0)
    {
        printf("Dem just born you, guy.");
    }
    else if(age < 0)
    {
        printf("Dem never born you na!");
    }
    else
    {
        printf("You never reach!");
    }

    return 0;
}
