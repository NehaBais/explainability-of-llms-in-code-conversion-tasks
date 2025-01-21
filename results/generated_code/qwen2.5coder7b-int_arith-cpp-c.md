Here is the equivalent code in C:

```c
#include <stdio.h>

int main()
{
  int a, b;
  scanf("%d %d", &a, &b);
  printf("a+b = %d\n", a + b);
  printf("a-b = %d\n", a - b);
  printf("a*b = %d\n", a * b);
  printf("a/b = %d, remainder %d\n", a / b, a % b);
  return 0;
}
```

Please note that C does not have a built-in operator for exponentiation. If you need to calculate the power of a number in C, you will need to write a function. Also, in C, integer division rounds towards zero, and the sign of the remainder matches the sign of the first operand.

Also, please do not forget to include `#include <stdio.h>` at the top of your C code as it's required for input/output operations.
