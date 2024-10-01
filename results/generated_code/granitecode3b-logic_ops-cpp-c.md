Here's the equivalent C code for the given function:
```c
void print_logic(int a, int b) {
  printf("a and b is %d
", a && b);
  printf("a or b is %d
", a || b);
  printf("not a is %d
", !a);
}
```
In C, we can directly use the logical operators (`&&`, `||`) on boolean variables. We don't need to include the `<iostream>` header file as the `printf` function is available in the standard library.

