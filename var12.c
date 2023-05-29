#include <stdio.h>

int main()

{ 
    for (int x = '0'; x <= '9'; x++)
    for (int y = '0'; y <= '9'; y++)

    for (int a = '0'; a <= '9'; a++)
    for (int b = '0'; b <= '9'; b++)
    {
        putchar(x);
        putchar(y);
        putchar(' ');  
        putchar(a);
        putchar(b);
    }         
        return 0;           
}