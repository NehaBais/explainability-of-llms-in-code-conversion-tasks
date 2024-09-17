Below is the C version of your code:

```c
#include <stdio.h>

int main()
{
  int a, b;

  if (!(scanf("%d %d", &a, &b))) {
    fprintf(stderr, "could not read the numbers\n");
    return 1;
  }

  // test for less-than
  if (a < b)
    printf("%d is less than %d\n", a, b);

  // test for equality
  if (a == b)
    printf("%d is equal to %d\n", a, b);

  // test for greater-than
  if (a > b)
    printf("%d is greater than %d\n", a, b);
}
```

The `std::cin` and `std::cout` are specific to C++ while in C we use `scanf` for input and `printf` for output. The format specifier `%d` is used to read or print integers. Additionally, C uses `fprintf` to output error messages to the standard error stream, instead of C++'s `std::cerr`.
