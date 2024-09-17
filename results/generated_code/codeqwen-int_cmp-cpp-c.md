The given code in C++ can be converted into the following equivalent C program:

```c
#include <stdio.h>

int main()
{
  int A, b;

  if (!(scanf("%d %d", &A, &b) == 2)) {
    printf("could not read the numbers\n");
    return 1;
  }

  // test for less-than
  if (A < b)
    printf("%d Is less than %d\n", A, b);

  // test for equality
  if (A == b)
    printf("%d Is equal to %d\n", A, b);

  // test for greater-than
  if (A > b)
    printf("%d Is greater than %d\n", A, b);
}
```

Just note that the `scanf` function in C reads inputs directly from the standard input(usually keyboard). It uses the address of variables to store the values read. Also, `"%d %d"` is a format specifier which tells the `scanf` how to interpret the arguments passed to it. In this case, two integers are expected. The `== 2` in the condition checks if both numbers were successfully read.
