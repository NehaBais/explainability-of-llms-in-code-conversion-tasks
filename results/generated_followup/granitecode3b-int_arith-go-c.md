The error is that the C compiler cannot find the `printf` and `scanf` functions, which are part of the standard library. The fix is to include the necessary header files, which provide declarations for these functions.
The corrected code is as follows:
```c
#include 
#include 
int main() {
  int a, b;
  printf("Enter two integers: ");
  scanf("%d %d", &a, &b);
  printf("%d + %d = %dn", a, b, a + b);
  printf("%d - %d = %dn", a, b, a - b);
  printf("%d * %d = %dn", a, b, a * b);
  printf("%d / %d = %d (truncating towards 0)\n", a, b, a / b);
  printf("%d %% %d = %d (same sign as first operand)\n", a, b, a % b);
  return 0;
}
```
This code includes the necessary header files and uses the standard input/output functions `printf` and `scanf` to display the results of the integer arithmetic operations.

