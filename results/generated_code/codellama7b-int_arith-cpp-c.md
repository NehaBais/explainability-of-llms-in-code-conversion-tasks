To convert the code from C++ to C, we can simply remove the C++-specific syntax and replace it with C-compatible constructs. Here's the converted code:
```
#include <stdio.h>

int main() {
  int a, b;
  scanf("%d %d", &a, &b);
  printf("a+b = %d\n", a+b);
  printf("a-b = %d\n", a-b);
  printf("a*b = %d\n", a*b);
  printf("a/b = %d, remainder %d\n", a/b, a%b);
  return 0;
}
```
Note that in C, the `std::cin` and `std::cout` streams are not available. Instead, we use the C `scanf()` function to read input from stdin (standard input) and the C `printf()` function to print output to stdout (standard output). The `%d` format specifier tells `scanf()` and `printf()` to expect a decimal integer, which allows us to read and write integers in the program.
