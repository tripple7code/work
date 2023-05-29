#include <stdio.h>

/*int main()
{
    int i; 
    i = 3;
    for(i = 3; i > 0; i--)
    {
        printf("%d\n", i);
    }
}*/

int main() {
    int i, j;
    
    // Nested for loops
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("(%d, %d) ", i, j);
        }
        printf("\n");
    }
    
    printf("\n");
    
    // Multiple for loops
    for (i = 0; i < 3; i++) {
        printf("Outer loop iteration %d\n", i);
        
        for (j = 0; j < 2; j++) {
            printf("Inner loop iteration %d\n", j);
        }
        
        printf("\n");
    }
    
    return 0;
}
