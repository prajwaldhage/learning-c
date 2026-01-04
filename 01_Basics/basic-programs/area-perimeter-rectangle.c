// Write a Program to accept the length and breadth of a rectangle from user. Calculate and display the area and perimeter.
// Developer: Prajwal Dhage
// Date: 24-12-2025

#include <stdio.h>
void main()
{
    int length, breadth, area, perimeter;
    printf("Enter the Length of Rectangle: ");
    scanf("%d", &length);
    printf("Enter the breadth of Rectangle: ");
    scanf("%d", &breadth);
    area = length * breadth;
    printf("Area of Rectangle: %d\n", area);
    perimeter = 2 * (length + breadth);
    printf("Perimeter of Rectangle: %d", perimeter);
}