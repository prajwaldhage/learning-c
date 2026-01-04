// Write a Program to display "Hi" Twice in a line and 5 such lines using nested for
// Day 9: Nested For Loop
// Date: 4-1-2026

#include <stdio.h>
void main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for (j=0;j<2;j++){
        printf("Hi ");
        }
        printf("\n");
    }
}