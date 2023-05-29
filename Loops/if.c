#include <stdio.h>

/*int main()
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
}*/

/*void print_most_numbers(void)
{
    char a;
    for (a = '0'; a <= '9'; a++)
    {
        if ((a == '2') | (a == '4'))
        {
            continue;
        }
        else
        {
            putchar(a);
        }
    }
    putchar('\n');
}
void main()
{
    print_most_numbers();
}*/

/*int main(void)
{
        int number;

        for (number = 48; number <= 57; number++)
        {
                 putchar(number);
                 if (number < 57)
                {
                        putchar(',');
                        putchar(' ');
                }
        }
        putchar('\n');
        return (0);
}*/

/*int main(void)
{
        int a;
        int b;

        for (a = '0'; a <= '9'; a++)
        {
                for (b = a + 1; b <= '9'; b++)
                {
                    putchar(a);
                    putchar(b);
                    if ((a < '8') && (b <= '9'))
                    {
                        putchar(',');
                        putchar(' ');
                    }
                }
        }
        putchar('\n');
        return (0);
}*/

/*#include <stdio.h>

int main()
{
    int a, b, c;
    
    for(a = '0'; a <= '7'; a++)
    {
        for(b = a + 1; b <= '8'; b++)
        {
            for(c = b + 1; c <= '9'; c++)
            {
                putchar(a);
                putchar(b);
                putchar(c);
                if(a < '7' && b <= '8' && c <= '9')
                {
                putchar(',');
                putchar(' ');
                }
            }
        }
    }
    putchar('\n');
    return 0;
}*/
/*#include <stdlib.h>

int print_last_digit(int n)
{
        int m;

        m = abs(n) % 10;
        putchar('0' + m);

        return (m);
}
int main()
{
    print_last_digit(78877);
}*/
