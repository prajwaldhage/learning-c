// Write a Program to display first n natural numbers using the while loop.
// Day 9: Do-while Loop
// Date: 26-12-2025

#include <stdio.h>
void main()
{
    int i,n;
    printf("Enter value of n: ");
    scanf("%d", &n);
    i = 1;
    while(i<=n)
    {
        printf("%d\n",i);
        i++;
    }
}

// Output:

// Enter a Number: 3
// 1
// 2
// 3