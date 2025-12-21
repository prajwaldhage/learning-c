#include <stdio.h>
int main()
{
    // Variable Declaration
    int a = 10, b = 20, c, x, y, z;
    // Binary Operators
        // Arithmetic
        printf("\n Arithmetic Operators:\n");
        c = a + b; // addition
        printf("sum = %d\n", c);
        c = b - a; // subtraction
        printf("difference = %d\n", c);
        c = a * b; // multiplication
        printf("product = %d\n", c);
        c = b / a; // division
        printf("quotient = %d\n", c);
        c = b % a; // floor division
        printf("remainder = %d\n", c);

        // Bitwise
        printf("\n Bitwise Operators:\n");
        x = ~10; // NOT ~
        printf("bitwise NOT for 10: %d\n", x);
        x = 5 & 3; // AND &
        printf("bitwise AND for 5 and 3: %d\n", x);
        x = 5 | 3; // OR |
        printf("bitwise OR for 5 and 3: %d\n", x);
        x = 5 ^ 3; // EXOR ^
        printf("bitwise EXOR for 5 and 3: %d\n", x);
        x = 5 << 3; // Bitwise Left shift
        printf("bitwise Left Shift for 5 by 3: %d\n", x);
        x = 50 >> 3; // Bitwise Right Shift
        printf("bitwise Right Shift for 50 by 3: %d\n", x);

        // Logical
        printf("\n Logical Operators:\n");
        x = 5, y = 10, z = 15;
        int condition1 = x<y; // 0 = False 1 = True
        int condition2 = y<z; // 0 = False 1 = True
        printf("Logical AND:\n");
        printf("X Greater than Y And Y greater than Z?%d\n", condition1 && condition2);
        printf("Logical OR:\n");
        printf("X Greater than Y Or Y greater than Z?%d\n", condition1 || condition2);
        
        // Relational
        printf("\n Relational Operators:\n");
        condition1 = a == b; // equals
        printf("A Equals B?%d\n", condition1);
        condition1 = a != b; // not equals
        printf("A not Equals B?%d\n", condition1);
        condition1 = a < b; // less than
        printf("A less than B?%d\n", condition1);
        condition1 = a > b; // greater than
        printf("A greater than B?%d\n", condition1);
        condition1 = a >= b; // less than or equal to
        printf("A less than or equal B?%d\n", condition1);
        condition1 = a <= b; // greater than or equal to
        printf("A greater than or equal to B?%d\n", condition1);
        
    // Ternary/Conditional Operator
        printf("\n Ternary/Conditional Operators:\n");
        x = 10, y = 15;
        int result = (x<y) ? y : x; // 10 greater or 15
        printf("Ternary Condition Result: %d\n",result);
        // (condition) ? if true : if false

    // Assignment Operator
        y = 2;
        y += x; // same as y = y + X
        y -= x; // same as y = y - x
        y *= x; // same as y = y * X
        y /= x; // same as y = y / X
        y %= x; // same as y = y % X
        y &= x; // same as y = y & X
        y |= x; // same as y = y | X
        y ^= x; // same as y = y ^ X
        y <<= x; // same as y = y << X
        y >>= x; // same as y = y >> X
        
    // Selection and comma Operator
        // []  Select element from Array
        // .   Period Operator, select element from structure or union
        // ->  select element from structure or union pointed by a pointer
        // ()  function call operator
        // ,   Comma Operator, used to separate the different values

    return 0;
}