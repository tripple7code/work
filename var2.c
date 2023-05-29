#include <stdio.h>

int main()
{
    char alphabet;

    for(alphabet = 'a'; alphabet <= 'z'; alphabet++)
    {
        if(alphabet == 'q' && alphabet == 'e')
        {
            continue;
        }
        putchar(alphabet);
    }
    putchar('\n');
    
    return 0;
}