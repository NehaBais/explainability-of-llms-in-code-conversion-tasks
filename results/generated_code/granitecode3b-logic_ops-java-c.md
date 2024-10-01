Here's the equivalent C code for the given Java function:
```
void logic(int a, int b){
 printf("a AND b: %d ", a && b);
 printf("a OR b: %d ", a || b);
 printf("NOT a: %d", !a);
}
```
In C, the `&&` operator is used to check if both `a` and `b` are non-zero. Similarly, the `||` operator is used to check if at least one of `a` or `b` is non-zero. The `!` operator is used to invert the value of `a`.

