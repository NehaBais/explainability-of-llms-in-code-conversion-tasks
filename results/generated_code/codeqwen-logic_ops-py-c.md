Sure, here is the equivalent C code for your Python function.

In C, there's no built-in boolean data type unlike in Python. Instead, C uses integers (0 and 1), where 0 represents false and 1 represents true. For that reason, we have to convert our logical expression into integer form before printing it out.

```c
#include<stdio.h>

void logic(int A, int B) {
    printf("A and B: %d\n", A && B);
    printf("A or B: %d\n", A || B);
    printf("Not A: %d\n", !A);
}

int main() {
    logic(1, 0); // you can replace 1 and 0 with any integer values of your choice.
    return 0;
}
```
This code will print out the "and", "or" and "not" of two integers (A & B).

Please note that this C code is assuming that `main()` function is the entry point to the program, it's a common practice in most programming languages. However, you can modify the `main()` function according to your needs.
