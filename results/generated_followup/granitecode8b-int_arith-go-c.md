The error was caused by missing header files for `stdio.h` which contains declarations for `printf` and `scanf`. The fix is to include the necessary header files at the beginning of the program.
Here's the corrected code:
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
  return 0;
}
```

