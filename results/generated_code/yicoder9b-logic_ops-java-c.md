Here is the equivalent C code for your Java function:

```C
#include <stdio.h>

void logic(int a, int b){
  printf("a AND b: %d\n", a && b);
  printf("a OR b: %d\n", a || b);
  printf("NOT a: %d\n", !a);
}

int main() {
    logic(1, 0); //Test the function with some values.
    return 0;
}
```
Please note that in C language boolean type is not directly supported so we use `int` instead where `1` stands for true and `0` for false.
