// Program to Find Factorial of a Number
// Date: 26-12-2025
// Developer: Prajwal Dhage

#include <stdio.h>

int main()
{
    int num, i, fact;
    printf("Enter a Number: ");
    scanf("%d",&num);

    for (i=1,fact=1;i<=num;i++)
    {
        fact = fact * i;
    }

    printf("Factorial of the number is:%d",fact);
}

// Output:

// Enter a Number: 5
// Factorial of the number is:120