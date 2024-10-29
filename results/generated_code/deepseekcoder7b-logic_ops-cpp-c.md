The C language does not have built-in support for boolean variables or Boolean operations. However, it can be mimicked using integers where "1" stands for true and "0" for false. Here's how you would write the equivalent code in C: 

```c
#include <stdio.h>

void print_logic(int a, int b) {
    printf("a and b is %s\n", (a && b) ? "true" : "false");
    printf("a or b is %s\n", (a || b) ? "true" : "false");
    printf("not a is %s\n", (!a) ? "true" : "false");
}

int main() {
   print_logic(1,0);
   return 0;
}
```
Note that C doesn't support standard output of boolean values so we have to convert them into string format. This is done using the ternary operator `? :` which checks a condition (a && b in our case) and based on its truthiness, it returns either "true" or "false".

