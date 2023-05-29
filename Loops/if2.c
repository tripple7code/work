#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* betty style doc for function main goes there */
/*int main()
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;

    if(n > 0)
    {
        printf("%d is positive", n);
    }
    else if(n = 0)
    {
        printf("%d is zero", n);
    }
    else if(n < 0)
    {
        printf("%d is negative");
    }
    return (0);
}*/

/*int main(void)
{
        int n;
        int m;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        m = n % 10;

        if (m > 5)
        {
                printf("Last digit of %d is %d and is greater than 5\n", n, m);
        }
        else if (m == 0)
        {
                printf("Last digit of %d is %d and is 0\n", n, m);
        }
        else if (m < 6 && m < 0)
        {
                printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
        }
        return (0);
}*/

/*int main(void)
{
    char c;
    for (c = 'a'; c <= 'z'; c++ )
    {
    printf("%c", c);
    }
    for (c = 'A'; c <= 'Z'; c++ )
    {
    printf("%c", c);
    }
    {
    putchar ('\n');
    }
}8?

/*int main()
{
    char alphabet;

    for(alphabet = 'a'; alphabet <= 'z'; alphabet++)
    {
        if((alphabet == 'e') | (alphabet == 'q'))
        {
            continue;
        }
        else
        {
            putchar(alphabet);
        }
    }
    {
            putchar('\n');
    }

    return 0;
}*/

/*int main()
{
    int a;
    for (a = 48; a <= 57; a++)
    putchar(a);
    putchar('\n');

}*/

/*int main(void)
{
    char c;
    for (c = 'z'; c >= 'a'; c--)
    {
    putchar (c);
    }
    {
    putchar ('\n');
    }
}*/

/*int main()
{
    int a;

    for (a = 48; a <= 57; a++)
    putchar(a);
    for (a = 97; a <= 102; a++)
    putchar(a);
    putchar('\n');
}*/

/*int main(void)
{
        int number;

        for (number = 48; number <= 57; number++)
        {
            putchar(number);
            putchar(',');
            putchar(' ');
        }
        putchar('\n');
}*/

/*int main()
{

    int a;
    int b;
    int c;

    for (a = 0; a <= 7; a++)
    for (b = a+1; b <= 8; b++)
    for (c = b+1; c <= 9; c++)
    {
        putchar('0' + a);
        putchar('0' + b);
        putchar('0' + c);
        putchar(',');
        putchar(' ');
    }
}*/

#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 *
 * Return: 0
 */

#include <stdio.h>

/*int main()
{
    int a, b, x, y;

    for (a = 48; a <= 57; a++)
    for (b = 48; b <= 56; b++)
    for (x = 48; x <= 57; x++)
    for (y = 49; y <= 57; y++)
    if (a == b && x == y)
    {
        continue;
    }
    else
    {
        putchar (a);
        putchar (b);
        putchar (' ');
        putchar (x);
        putchar (y);
        putchar (',');
        putchar (' ');
    }

}*/

/*int main()
{
    int x, y;

    for (x = 0; x <= 99; x++)
    {
    for (y = 0; y <= 99; y++)
    {
    if (x < y)
        {
            putchar((x / 10) + 48);
            putchar((x % 10) + 48);
            putchar(' ');
            putchar((y / 10) + 48);
            putchar((y / 10) + 48);
            if(x != 98 || y != 99)
            {
                putchar(',');
                putchar(' ');
            }
        }
    }
    }
}*/

/*int main()
{
    char alphabet;
    int a;

    for(a = 0; a <= 10; a++)
    {
        for(alphabet = 'a'; alphabet <= 'z'; alphabet++)
        {
            putchar(alphabet);
        }
        putchar('\n');
    }

}*/

/*int main()
{
    char alphabet = 'a';
    int a = 0;

    while (a <= 10)
    {
        while (alphabet <= 'z')
        {
            putchar(alphabet);
            alphabet++;
        }
        alphabet = 'a';
        a++;
        putchar('\n');
    }

}*/

/*int main()
{
    char c;

    printf("Enter Character: ");
    scanf("%c", &c);

    if(c >= 'A' && c <= 'Z')
    {
        printf("Uppercase Active");
    }
    else if(c >= 'a' && c <= 'z')
    {
        printf("Lowercase Active");
    }
    else
    {
        printf("Error! Non-Alphabet");
    }

}*/

/*int lower()
{
    char character = 'c';

    if(character >= 'a' && character <= 'z')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int result = lower();
    if (result == 1)
    {
        printf("Lowercase");
    }
    else
    {
        printf("Non-Lowercase");
    }

}*/

/*int alpha()
{
    char character = 'c';

    if(character >= 'a' && character <= 'z')
    {
        return 1;
    }
    else if(character >= 'A' && character <= 'Z')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int result = alpha();
    if (result == 1)
    {
        printf("Alphabet");
    }
    else
    {
        printf("Non-Alphabet");
    }
}*/

/*int printsign()
{
    int n = -5;

    if (n > 0)
    {
        putchar('+');
        putchar(',');
        putchar(' ');
        return 1;
        putchar('\n');
    }
    else if (n == 0)
    {
        putchar('0');
        putchar(',');
        putchar(' ');
        return 0;
        putchar('\n');
    }
    else if (n < 0)
    {
        putchar('-');
        putchar(',');
        putchar(' ');
        return -1;
        putchar('\n');
    }
}
int main()
{
    int result = printsign();
    printf("%d", result);
    return 0;
}*/

/*int absolute(int n)
{
    if (n < 0)
    {
        return -n;
    }
    else
    {
        return n;
    }
    return 0;
}
int main()
{
    int o;
    printf("Enter Number: ");
    scanf("%d", &o);
    int m = absolute(o);
    printf("%d", m);

    return 0;
}*/

/*int lastdigit(int n)
{
    int m;
    m = n % 10;
    printf("%d", m);

    return 0;
}
int main()
{
    int a;
    printf("Enter Number: ");
    scanf("%d", &a);
    lastdigit(a);
}*/

/*int jackbauer()
{
    int m;
    int n;

    for (m = 0; m < 24; m++)
    {
        for (n = 0; n < 60; n++)
        {
            printf("%03d:%03d\n", m, n);
        }
    }
}
int main()
{
    jackbauer();
}*/

/*int main()
{
    int a;
    int b;
    int c;

    for (a = 0; a < 10; a++)
    {
       for (b = a+1; b < 10; b++)
       {
        for (c = b+1; c < 10; c++)
       if (a == b && b == c && c == a)
       {
        continue;
       }
       else
       {
        printf("%d%d%d, ", a, b, c);
       }
       }
    }
}*/

/*int main()
{
    int a;

    for (a = 0; a <= 9; a++)
    {
        putchar(a + '0');
        if (a < 9)
        {
            putchar(',');
            putchar(' ');
        }
    }
}*/

/*int main()
{
    int rows = 9;
    int columns = 9;
    int a;
    int b;

    for (a = 0; a <= rows; a++)
    {
        for (b = 0; b <= columns; b++)
        {
        printf("%3d,", a * b);
        }
        printf("\n");
    }
}*/

/*int times_table(int row, int column)
{
    int a, b;

    printf("Enter Row: ");
    scanf("%d", &row);
    printf("Enter Column: ");
    scanf("%d", &column);

    a = 1;
    while (a <= row)
    {
        b = 9;
        while (b <= column)
        {
        printf("%4d,", a * b);
        b++;
        }
        printf("\n");
        a++;
    }

}
int main()
{
    times_table(10, 10);
}*/

/*#include <stdio.h>

int main(void) {
    int rows = 9;
    int columns = 9;
    int a;
    int b;

    for (a = 0; a <= rows; a++) {
        for (b = 0; b <= columns; b++) {
            int result = a * b;
            if (result < 10) {
                putchar(' ');
            }
            if (result < 100) {
                putchar(' ');
            }
            putchar('0' + (result / 10));
            putchar('0' + result % 10);
            putchar(',');
            putchar(' ');
        }
        putchar('\n');
    }

    return 0;
}*/

/**
 * main - prints even numbers from 0 to 100
 * Return: 0
 */

/*int main(void)
{
        int i;

        for (i = 0; i < 100; i++)
        {
                if (i % 2 != 0)
                {
                        continue;
                }
                printf("%02d, ", i);
        }

        return(0);
}*/
#include <stdio.h>

/**
 * main - causes an infinite loop
 * Return: 0
 */

/*int main(void)
{
        int i;

        printf("Infinite loop incoming :(\n");

        i = 0;

        while (i < 10)
        {
                putchar(i);
        }

        printf("Infinite loop avoided! \\o/\n");

        return (0);
}*/

/*int largest_number(int a, int b, int c)
{
    int largest;

    if (a > b && b > c)
    {
        largest = a;
    }
    else if (b > a && a > c)
    {
        largest = b;
    }
    else
    {
        largest = c;
    }

    return (largest);
}*/

/*#include <stdio.h>

int convert_day(int month, int day)
{
    switch (month)
    {
        case 2:
            day = 31 + day;
            break;
        case 3:
            day = 59 + day;
            break;
        case 4:
            day = 90 + day;
            break;
        case 5:
            day = 120 + day;
            break;
        case 6:
            day = 151 + day;
            break;
        case 7:
            day = 181 + day;
            break;
        case 8:
            day = 212 + day;
            break;
        case 9:
            day = 243 + day;
            break;
        case 10:
            day = 273 + day;
            break;
        case 11:
            day = 304 + day;
            break;
        case 12:
            day = 334 + day;
            break;
        default:
            break;
    }
    return (day);
}
void print_remaining_days(int month, int day, int year)
{
    if ((year % 4 == 0 || year % 400 == 0) && !(year % 100 == 0))
    {
        if (month >= 2 && day >= 60)
        {
            day++;
        }

        printf("Day of the year: %d\n", day);
        printf("Remaining days: %d\n", 366 - day);
    }
    else
    {
        if (month == 2 && day == 60)
        {
            printf("Day of the year: %d\n", day);
            printf("Remaining days: %d\n", 365 - day);
        }
        else
        {
            printf("Day of the year: %d\n", day);
            printf("Remaining days: %d\n", 365 - day);
        }
    }
}
int main()
{
    int month;
    int day;
    int year;

    month = 02;
    day = 29;
    year = 2000;

    printf("Date: %02d/%02d/%04d\n", month, day, year);

    day = convert_day(month, day);

    print_remaining_days(month, day, year);

    return (0);
}*/

/*void times_table(void)
{
        int a;
        int b;

        for (a = 0; a < 10; a++)
        {
                for (b = 0; b < 10; b++)
                if (a < 9 && b < 9)
                {
                    printf("%2d, ", a * b);
                }
                printf("\n");
        }
}
int main()
{
    int a = 10;
    int b = 10;
    times_table();
}*/

/*int add(int a, int b)
{
    int sum;
    sum = a + b;
    return (sum);
}
int main()
{
    int n;

    n = add(89, 9);
    printf("%d\n", n);
    return (0);
}*/

int main() {
    
    int m = -10;
    
    if (m >= 98) {       
        for (int i = m; i >= 98; i--) {
            printf("%d, ", i);
        }    
        printf("\n");
    }
    else if (m <= 98) {       
        for (int i = m; i <= 98; i++) {
            printf("%d, ", i);
        }    
        printf("\n");
    }
    return 0;
}
