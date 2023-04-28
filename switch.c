#include <stdio.h>

int main()
{
    char grade;
    
    printf("Enter grade: ");
    scanf("%c", &grade);
    

    switch (grade)
    {
    case 'A':
        printf("Perfect!");
        break;
    case 'B':
        printf("Very Good!");
        break;
    case 'C':
        printf("Good!");
        break;
    case 'D':
        printf("Fair!");
        break;
    case 'E':
        printf("Poor!");
        break;
    case 'F':
        printf("Very Poor!");
        break;
    default:
        printf("Invalid Input. Please enter grade A to F");
    }
}