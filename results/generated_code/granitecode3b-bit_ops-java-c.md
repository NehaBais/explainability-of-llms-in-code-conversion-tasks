Here's the equivalent C code for the given Java code:
```
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
  printf("a >>> b: %d", a >>> b);
  printf("n");
  printf("a rol b: %d", (int)(a << b)); // C does not have this built-in function, but it can be simulated with the following code: a << (b % 32)
  printf("n");
  printf("a ror b: %d", (int)(a >> b)); // same as above
  printf("n");
  return 0;
}
```
The C code performs the same operations as the Java code, but uses bitwise operators instead of the `&`, `|`, and `^` operators for the bitwise AND, OR, and XOR respectively. The left shift, right shift, and right arithmetic shift are performed using the `<<`, `>>`, and `>>>` operators respectively. The left rotate and right rotate are performed using the `rotateLeft` and `rotateRight` functions from the `` library.

