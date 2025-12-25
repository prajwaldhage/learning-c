// Day 2: Data Types and Variables
// Date: 20-12-2025

#include <stdio.h>
int main()
{
    int a = 1; // Integer till 32767
    char b = 'a'; // Character [ASCII]
    float c = 1.5; // Float upto 3.4e^38
    long d = 22334455; // Upto 2.1 Billion
    double e = 777788889999.77; // upto 1.7e^308

    printf("%d \n %c \n %f \n %ld \n %lf \n",a,b,c,d,e);
}


// Output:
// 
// 1 
//  a 
//  1.500000 
//  22334455 
//  777788889999.770020 


// Format Specifier Data Type
// %d               int	
// %f	            float
// %lf	            double
// %c	            char
// %ld              long integer


// Allowed Variable Names:
// a
// hello
// _3data
// simple_interest

// Invalid Variable Names:
// 3abc
// #hello
// void
// Good Morning