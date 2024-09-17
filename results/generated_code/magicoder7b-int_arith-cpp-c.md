 The C programming language does not support operator overloading, which allows for a more convenient way to perform arithmetic operations as you did in your given C++ code. However, the following code will do exactly what was asked:

```c
#include <stdio.h>

int main() {
  int a, b;
  printf("Enter two numbers: ");
  scanf("%d %d", &a, &b);
  
  printf("Sum: %d\n", a + b);
  printf("Difference: %d\n", a - b);
  printf("Product: %d\n", a * b);
  printf("Quotient (rounds towards zero): %.0f\n", (float)a / b);
  
  // C does not directly support the 'remainder' operation, so you need to explicitly subtract the floor of the quotient.
  int remainder = a - ((a < 0 && b > 0) || (b < 0 && a > 0) ? b : a);
  
  printf("Remainder: %d\n", abs(remainder)); // Print the absolute value of the remainder.
  
  return 0;
}
```

This code will not work as expected for negative numbers with an absolute quotient, because C doesn't support this operation directly and it would lead to a wrong result (it rounds towards zero). Also, the 'remainder' calculation is based on whether the numbers are positive or negative in order to give a correct result.
