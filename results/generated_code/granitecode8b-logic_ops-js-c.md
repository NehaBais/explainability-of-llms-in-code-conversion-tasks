Here is the converted code in C:
```c
#include 
void logic(int a, int b) {
 printf("a AND b: %d", a && b);
 printf("a OR b: %d", a || b);
 printf("NOT a: %d", !a);
}
int main() {
 logic(1, 1); // Output: a AND b: 1, a OR b: 1, NOT a: 0
 logic(0, 1); // Output: a AND b: 0, a OR b: 1, NOT a: 1
 logic(1, 0); // Output: a AND b: 0, a OR b: 1, NOT a: 0
 return 0;
}
```
Note that the logical operators in C are `&&` for "and", `||` for "or", and `!` for "not". Also, the `int` data type is used for boolean values in C.

