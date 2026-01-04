// Write a Program to accept two numbers and display its product
// Developer: Prajwal Dhage
// Date: 24-12-2025

#include <stdio.h>
void main()
{
    int number1, number2, product;
    printf("Enter Number 1: ");
    scanf("%d", &number1);
    printf("Enter Number 2: ");
    scanf("%d", &number2);
    product = number1 * number2;
    printf("The sum of %d and %d is %d", number1, number2, product);
}