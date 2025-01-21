 The error occurs because C99 and later standards do not allow implicit function declarations. This means that the compiler will not assume the existence of functions or methods without knowing anything about them, which is why it is complaining about 'abs' not being declared.
To fix this issue, include the standard library for <stdlib.h> in your code to declare abs method or use explicit function declaration.

Corrected Code:
```c
#include <stdio.h>
#include <stdlib.h> // For the 'abs' function

int main() {
  int a, b;
  printf("Enter two numbers: ");
  scanf("%d %d", &a, &b);

  printf("Sum: %d\n", a + b);
  printf("Difference: %d\n", a - b);
  printf("Product: %d\n", a * b);
  
  // C99 and later standards do not support implicit function declarations, so you need to include the header <stdlib.h> or explicitly declare 'abs' function.
  int quotient = (float)a / b;
  printf("Quotient: %.0f\n", quotient);
  
  // C does not directly support the 'remainder' operation, so you need to explicitly subtract the floor of the quotient.
  int remainder = a - ((a < 0 && b > 0) || (b < 0 && a > 0) ? b : a);

  printf("Remainder: %d\n",
         abs(remainder)); // Print the absolute value of the remainder.

  return 0;
}
```
