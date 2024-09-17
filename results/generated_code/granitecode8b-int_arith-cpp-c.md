Here is the converted code from C++ to C:
```
#include 
int main()
{
 int a, b;
 printf("Enter two integers: ");
 scanf("%d %d", &a, &b);
 printf("Sum = %dn", a+b);
 printf("Difference = %dn", a-b);
 printf("Product = %dn", a*b);
 printf("Quotient (rounds towards zero) = %dn", a/b);
 printf("Remainder (matches sign of first operand) = %dn", a%b);
 return 0;
}
```
Note that in C, the `printf` function is used to display output, and the `scanf` function is used to read input. Also, since C does not have built-in support for exponentiation, the code uses integer division (`/`) instead to calculate the quotient, which rounds towards zero by default.

