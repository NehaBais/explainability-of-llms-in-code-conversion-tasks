In C programming language, you can achieve the same functionality by creating a similar function that takes two integer arguments (representing boolean values) as input. The "and" operation can be performed using the bitwise AND operator (&), the "or" operation can be performed with the bitwise OR operator (|), and the "not" operation can be performed with the bitwise NOT operator (~). Remember, in C language, true is represented by 1 and false by 0.

Here's how you can implement it:

```c
#include <stdio.h>

void printLogic(int a, int b) {
    printf("a and b is %d\n", a & b);
    printf("a or b is %d\n", a | b);
    printf("not a is %d\n", !a);
}

int main() {
    printLogic(1, 0); // You can replace 1 and 0 with any integers
                      // to test the function with different inputs
    return 0;
}
```

Please note that, in C language, boolean data type does not exist. Instead, non-zero values are considered as true while zero is considered as false.
So, the above implementation uses integer representation for boolean values.
