#include <stdio.h>

int main()
{
    int a = 4;
    char b;
    int a_size = sizeof(a);
    int b_size = sizeof(b);

    printf("Demonstration of sizeof() special operator: \n");

    printf("Size of a variable: %d\n", a_size);
    printf("Size of b variable: %d\n", b_size);

    printf("Demonstration of Casting Operator ()")
    int x = 4, float y = 5.6;
    x = (int) y;
    // Here, we turned the Datatype of y which was float. to int and stored in x.
}