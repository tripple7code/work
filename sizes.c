#include <stdio.h>

int main()
{
    char name[25];
    int age;

    printf("What is your name? ");
    //scanf("%s", name);
    fgets(name, 25, stdin);

    printf("\nHow old are you?\n");
    scanf("%d", &age);

    printf("Hello %s, how are you?\n", name);
    printf("You are %d years old", age);

    return 0;
}
