Here's the C code that performs the same operations as the provided JavaScript code:
```c
#include 
int main() {
 int a = 5;
 int b = 3;
 
 printf("a AND b: %d", a & b);
 printf("n");
 printf("a OR b: %d", a | b);
 printf("n");
 printf("a XOR b: %d", a ^ b);
 printf("n");
 printf("NOT a: %d", ~a);
 printf("n");
 printf("a << b: %d", a << b);
 printf("n");
 printf("a >> b: %d", a >> b);
 printf("n");
 printf("a >>> b: %d", a >> b);
 return 0;
}
```
In this C code, we first declare two integer variables `a` and `b`, and initialize them with the values 5 and 3, respectively. We then use the bitwise AND operator `&`, OR operator `|`, XOR operator `^`, bitwise NOT operator `~`, left shift operator `<<`, right shift operator `>>`, and right arithmetic shift operator `>>>` to perform the operations on `a` and `b`. Finally, we print the results using the `printf` function.

