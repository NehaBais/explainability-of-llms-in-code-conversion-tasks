In C, we don't have built-in support for boolean operations like "and" (&&), "or" (||) and "not" (!). So, you need to write separate functions or use the standard operators. Here is your Golang code converted into a similar format in C language:

```c
#include <stdio.h>

// function for logical AND operation
int And(int a, int b) {
    return a && b;
}

// function for logical OR operation
int Or(int a, int b) {
    return a || b;
}

// function for logical NOT operation on single boolean (integer here as C doesn't have bool type)
int Not(int a) {
    return !a;
}

void printLogic(int a, int b) {
    printf("a and b is %d\n", And(a,b));
    printf("a or b is %d\n", Or(a,b));
    printf("not a is %d\n", Not(a));
}
``` 
In the printLogic function, you need to pass int values (1 for true and 0 for false) instead of boolean variables. The rest of the code remains the same. Note that in C all statements are ended with semicolon (;). It's also important to note that this code assumes a system where 'true' is represented as an integer value of 1, and 'false' is represented as an integer value of 0.

