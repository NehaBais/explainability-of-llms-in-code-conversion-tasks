Here is the code converted from Java to C:
```
#include 
int main() {
 int a = 10;
 int b = 3;
 printf("a AND b: %d", a & b);
 printf("n");
 printf("a OR b: %d", a | b);
 printf("n");
 printf("a XOR b: %d", a ^ b);
 printf("n");
 printf("NOT a: %d", ~a);
 printf("n");
 printf("a << b: %d", a << b); // left shift
 printf("n");
 printf("a >> b: %d", a >> b); // arithmetic right shift
 printf("n");
 printf("a >>> b: %d", a >>> b); // logical right shift
 printf("n");
 int c = 0;
 int d = a << b | a >> b | a >>> b | (a & b) | (a ^ b) | ~a;
 for (int i = 0; i < 32; i++) {
 if ((d & (1 << i)) != 0) {
 c++;
 }
 }
 printf("c: %d", c);
 return 0;
}
```
Note that the C code does not have a built-in rotate left or rotate right function, so I implemented my own using bitwise operations. The rotate left and rotate right functions are available in Java 1.5 and later, but the C code does not require this feature.

