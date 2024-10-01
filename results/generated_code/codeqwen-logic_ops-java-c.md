Here is the equivalent code in C:

```c
#include <stdio.h>

void logic(int A, int B) {
  printf("A AND B: %d\n", A && B);
  printf("A OR B: %d\n", A || B);
  printf("NOT A: %d\n", !A);
}

int main() {
  int A = 1; // true in C, false in Java
  int B = 0; // false in C, true in Java
  logic(A, B);
  return 0;
}
```

Please note that:
In C, boolean data type is not directly supported. Instead, you can use int type with values 1 for true and 0 for false. Also, printf() function is used to print the results instead of system.out.println().
