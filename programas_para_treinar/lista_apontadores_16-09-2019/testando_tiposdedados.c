#include <stdio.h>

int main()
{
    int num1 = 2;
    short num2;

    num2 = num1;

    printf("\n%d\n\n", num2);
    
    short num3 = 4;

    num1 = num3;

    printf("\n%d\n\n", num1);


    return (0);
}