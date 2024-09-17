Here is the equivalent C code for your JavaScript function:

```C
#include <stdio.h>

void bitwise(int A, int B) {
    printf("A AND B: %d\n", (A & B));
    printf("A OR B: %d\n", (A | B));
    printf("A XOR B: %d\n", (A ^ B));
    printf("NOT A: %d\n", ~A);
    printf("A << B: %d\n", (A << B)); // left shift
    printf("A >> B: %d\n", (A >> B)); // arithmetic right shift
    printf("A >>> B: %d\n", (A >> B)); // logical right shift
}

int main() {
    int A = 8;
    int B = 3;
    bitwise(A, B);
    return 0;
}
```

This C code defines a function `bitwise`, which performs the same operations as your JavaScript function. The `<<` operator in C performs a left shift of the bits in the integer A by the value of B. Similarly, the `>>` operator performs an arithmetic right shift, and the `>>>` operator performs a logical right shift. 

The `~` operator is bitwise NOT, which reverses all bits of its operand. The `&`, `|`, and `^` operators are bitwise AND, OR, and XOR respectively.
