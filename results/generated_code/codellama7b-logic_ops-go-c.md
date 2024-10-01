
Here's the C code that satisfies the requirements: 
```
#include <stdio.h>

void printLogic(bool a, bool b) {
    printf("a and b is %d\n", (int) a && b);
    printf("a or b is %d\n", (int) a || b);
    printf("not a is %d\n", !(int) a);
}
```
Explanation:

The C programming language uses different syntax for logical operations than Go. In C, we use the bitwise operators && and || instead of && and ||, respectively. The ! operator is used for negation in C. The int type is used to convert the boolean values to integer values that can be operated on by the bitwise operators.
The printf function in C takes a format string as its first argument and substitutes variables from the subsequent arguments according to that format. %d stands for the type of the variable being output, which is an integer in this case.
