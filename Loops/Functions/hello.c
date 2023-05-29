#include <stdio.h>

/*void hello(char [], int);//function prototype

int main()
{
    char name[] = "Timothy, ";
    int age = 23;

    hello(name, age);

    return 0;
}

void hello(char name[], int age)
{
    printf("Hello %s", name);
    printf("You are %d years old\n", age);
}*/

/*int aor(int length, int breadth)
{
    int area;
    area = length * breadth;
    return area;
}
int main()
{
    int l=10, b=20;
    int area = aor(l,b);
    printf("%d\n", area);
}*/

/*char fun();//function declared with char return type
int main()
{
    char c = fun();//function call
    printf("Character is %c", c);
}
char fun()//definition of the "fun" function. This function returns 'a' back to the function call and stored in the variable c whose content is then printed
{
    return 'b';
}*/

/*char fun()//definition of the "fun" function. This function returns 'a' back to the function call and stored in the variable c whose content is then printed
{
    return 'b';
}
int main()
{
    char c = fun();//function call
    printf("Character is %c", c);
}*/

//for example: function definition  
/*int add(int a, int b)
{
    int sum;
    sum = a + b;
    return sum; 
}*/

/*int add(int a, int b)//parameters 
{
    return (a+b);
}
int main()
{
    int m = 20, n = 70, sum;

    sum = add(m,n);//arguements
    printf("Result is %d\n", sum);
    return 0;
}*/

//call by value
/*int fun(int x, int y)//defining the function
{
    x = 30;
    y = 40;
}
int main()
{
    int x = 10, y = 20;
    fun(x, y);
    printf("Vale of x is %d and value of y is %d\n", x, y);
}*/

/*int fun(int *ptr1, int *ptr2)//defining the function
{
    *ptr1 = 30;
    *ptr2 = 50;
}
int main()
{
    int x = 10, y = 20;
    fun(&x, &y);
    printf("Value of x is %d and value of y is %d\n", x, y);
}*/

/*int func(int num)
{
    int count = 0;
    while(num)
    {
        count++;
        num >>=1;//shift to the right by one position
    }
    return(count);   
}

int main()
{
    int num = 435; // binary: 101010
    int num_bits = func(num);
    printf("The number of bits needed to represent %d in binary is %d\n", num, num_bits);
    return 0;
}*/

int func(int num)
{
    int count = 2;
    while(num)
    {
        count++;
        num >>= 2;
    }
    return(count)
}






