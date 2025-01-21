The error generated is related to the printf function syntax in C language. It's indicating that there are extraneous ')' before ';'. 

To fix this, we need to ensure that each opening parenthesis has a corresponding closing parenthesis. We also need to adjust the print format for each operation:
1. AND: `%d and %d -> %d`
2. OR: `%d or %d -> %d`
3. XOR: `%d xor %d -> %d`
4. NOT: `not %d -> %d`

Here is the corrected C code enclosed in a single fenced code block:
```c
#include <stdio.h>

void boolean_ops(int a, int b) {
    printf("%d and %d 
-> %d\n", a, b, (a != 0) && (b != 0)));

    printf("%d or %d 

-> %d\n", a, b, (a != 0) || (b != 0)));

    printf("%d xor %d 

-> %d\n", a, b, (a != 0) ^ (b != 0)));

    printf("not %d 

-> %d\n", a, !a);
}

int main() 
{
  boolean_ops(1, 1);
  boolean_ops(1, 0);
  boolean_ops(0, 1);
  boolean_ops(0, 0);

  return 0;
}
```
