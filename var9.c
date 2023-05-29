#include <stdio.h>

int main()

{ 
    for (int x = 48; x <= 55; x++)
    for (int y = 49; y <= 56; y++)
    for (int z = 50; z <= 57; z++)
   
    {
        if(x == y && y == z)
        {
            continue;
        }
            putchar(x);   
            putchar(y);
            putchar(z);
            
       return 0;        
    }      
}