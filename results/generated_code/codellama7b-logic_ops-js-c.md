 Here is the C code that corresponds to the JavaScript code you provided:
```
#include <stdio.h>

void logic(int a, int b) {
    printf("a AND b: %d\n", a && b);
    printf("a OR b: %d\n", a || b);
    printf("NOT a: %d\n", !a);
}
```
Here's an explanation of how the code works:

* The `printf` function is used to print output to the console. It takes two arguments: the first is the format string, and the second is the variable to be printed. In this case, the format strings are `"a AND b: %d\n"`, `"a OR b: %d\n"` and `"NOT a: %d\n"` respectively. The `%d` specifier tells `printf` to print an integer value.
* The `&&` operator is used for "and" operation, which returns the result of both operands if they are both non-zero (i.e., true), and 0 otherwise. The `||` operator is used for "or" operation, which returns the result of either operand if it is non-zero (i.e., true), and 0 otherwise.
* The `!` operator is used for "not" operation, which returns the opposite of its operand.

Note that in C, boolean values are represented as integers with a value of 0 or 1, where 0 represents false and 1 represents true.
