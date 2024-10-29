The equivalent C code would be as follows. The function takes two integers for simplicity (since in C there is no direct equivalent to Rust's `bool` data type), but the logic and operations remain the same. We use 1 for true and 0 for false here. In practice, you should work with actual boolean variables or a bitwise operation on integer values instead of integers itself:
```c
#include <stdio.h>

void boolean_ops(int a, int b) {
    printf("%d and %d -> %d\n", a, b, a && b);
    printf("%d or %d -> %d\n", a, b, a || b);
    // In C, XOR can be performed with ^ operator but for boolean values we often use != (not equals)
    printf("%d xor %d -> %d\n", a, b, a != b); 
    printf("not %d -> %d\n", a, !a);
}

int main() {
    boolean_ops(1, 1); // true and true 
    boolean_ops(1, 0); // true and false
    boolean_ops(0, 1); // false and true
    boolean_ops(0, 0); // false and false
    
    return 0;
}
```
This code will output the results of "and", "or" and "not" operations for all possible combinations of two boolean values. The XOR operation is not standard in C so we simulate it with `!=` operator. If you would like to perform bitwise xor on integer variables, you can use `^` operator as well.

