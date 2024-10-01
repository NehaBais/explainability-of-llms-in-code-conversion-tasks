Here's the equivalent C code for the given Golang function:
```c
#include 
int main() {
    int a = 1; // set to 1 or 0 for true or false respectively
    int b = 1;
    printf("a and b is %d", a && b);
    printf("n");
    printf("a or b is %d", a || b);
    printf("n");
    printf("not a is %d", !a);
    return 0;
}
```
Note that in C, the `&&` and `||` operators have lower precedence than the `!` operator, so we need to use parentheses to group them properly.

