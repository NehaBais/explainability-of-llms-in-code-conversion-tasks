The given code is already in C, so there's no need to convert it. However, here's the same program with proper indentation and line breaks:

```c
#include <stdio.h>

int main() {
   int A, b;
   printf("Enter two integers: ");
   scanf("%d %d", &A, &b);
   printf("A+b = %d\n", A+b);
   printf("A-b = %d\n", A-b);
   printf("A*b = %d\n", A*b);
   printf("A/b = %d, remainder %d\n", A/b, A%b);
   return 0;
}
```

The only difference between the two is that in C, `std::cout` and its variations are replaced with `printf()` function from the `<stdio.h>` library. The rest of the code remains the same.
