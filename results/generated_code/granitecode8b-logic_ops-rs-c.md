Here is the converted code from Rust to C:
```
#include 
void boolean_ops(int a, int b) {
 printf("%d and %d -> %d
", a, b, a && b);
 printf("%d or %d -> %d
", a, b, a || b);
 printf("%d xor %d -> %d
", a, b, a ^ b);
 printf("not %d -> %d
", a, !a);
}
int main() {
 boolean_ops(1, 1);
 boolean_ops(1, 0);
 boolean_ops(0, 1);
 boolean_ops(0, 0);
 return 0;
}
```
Note that in C, logical values are represented as integers (0 for false and non-zero for true). The `&&`, `||`, and `^` operators work as expected with integer values. The `!` operator negates the value, which is equivalent to subtracting it from 1. The `printf()` function is used to print the output.

