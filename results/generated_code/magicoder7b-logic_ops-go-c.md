 In C language, you can use the logical operators `&&`, `||` and `!` to perform AND, OR, and NOT operations on boolean values respectively. Here's how you can translate the Golang function to C:

```c
#include <stdio.h>

void printLogic(int a, int b) {
    // Checking the values of a and b 
    printf("a and b is %d\n", (a && b));
    printf("a or b is %d\n", (a || b));
    printf("not a is %d\n", !a);
}
```
Please note, in C language, logical values are represented as integers with 0 representing `false` and any non-zero value representing `true`. Hence the function signature accepts ints. You can pass 1 or true for true booleans, and 0 or false for false booleans to this function. For example:

printLogic(1, 1); // Prints 'a and b is 1' , 'a or b is 1', 'not a is 0'
printLogic(0, 1); // Prints 'a and b is 0' , 'a or b is 1', 'not a is 1'
