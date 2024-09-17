Here is the converted code from JavaScript to C:
```
#include 
int bitwise(int a, int b){
 printf("a AND b: %d", a & b);
 printf("n");
 printf("a OR b: %dn", a | b);
 printf("a XOR b: %dn", a ^ b);
 printf("NOT a: %dn", ~a);
 printf("a << b: %dn", a << b); // left shift
 printf("a >> b: %dn", a >> b); // arithmetic right shift
 printf("a >>> b: %dn", a >>> b); // logical right shift
 return 0;
}
```
Note that in C, the `<<`, `>>`, and `>>>` operators perform bitwise shifts on integer values. The `~` operator performs a bitwise NOT on its operand, which is an integer value. The `&`, `|`, and `^` operators perform bitwise AND, OR, and XOR operations on their operands, respectively.

