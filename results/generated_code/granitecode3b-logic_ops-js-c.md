Here's the equivalent C code for the given JavaScript function:
```
void logic(int a, int b) {
  printf("a AND b: %d", a && b);
  printf("n");
  printf("a OR b: %d", a || b);
  printf("n");
  printf("NOT a: %d", !a);
  printf("n");
}
```
In this C code, the function `logic` takes two integer arguments `a` and `b`, and prints out the result of "and" and "or" on both arguments as well as "not" on the first argument. The `&&` operator returns 1 if both `a` and `b` are non-zero, and 0 otherwise. Similarly, the `||` operator returns 1 if at least one of `a` or `b` is non-zero, and 0 otherwise. The `!` operator negates the value of `a`.

