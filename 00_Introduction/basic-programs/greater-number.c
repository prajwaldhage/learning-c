// Write a Program to accept 2 numbers from user and display the greatest of two using the conditional operator.
// Developer: Prajwal Dhage
// Date: 24-12-2025

#include <stdio.h>
void main()
{
    int num1, num2, compare;
    printf("Enter number 1: ");
    scanf("%d", &num1);
    printf("Enter number 2: ");
    scanf("%d", &num2);
    compare = (num1 > num2) ? num1 : num2;
    printf("Greater Number: %d", compare);
}