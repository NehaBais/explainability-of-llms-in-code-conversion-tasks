Here is the converted code from Golang to C:
```c
#include 
#include 
int main() {
 int a, b;
 printf("Enter two integers: ");
 scanf("%d %d", &a, &b);
 printf("%d + %d = %d
", a, b, a+b);
 printf("%d - %d = %d
", a, b, a-b);
 printf("%d * %d = %d
", a, b, a*b);
 printf("%d / %d = %d
", a, b, a/b); // truncates towards 0
 printf("%d %% %d = %d
", a, b, a%b); // same sign as first operand
 // no exponentiation operator
 return 0;
}
```
Note that the `scanf` function is used to read input from the user in C. The `printf` function is used to print output to the console. The `%d` format specifier is used to print integers. The `/` operator performs integer division, which truncates towards zero. The `%` operator performs modulo operation, which returns the remainder with the same sign as the first operand.

