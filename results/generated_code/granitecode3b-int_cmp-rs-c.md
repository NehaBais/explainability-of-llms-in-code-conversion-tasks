Sure, here's the C code that converts the given Rust code snippet:
```c
#include 
int main()
{
  int a, b;
  printf("Enter two integers:");
  scanf("%d %d", &a, &b);
  if (a < b) {
    printf("%d is less than %d", a, b);
  } else if (a == b) {
    printf("%d equals to %d", a, b);
  } else {
    printf("%d is greater than %d", a, b);
  }
  return 0;
}
```
This C code prompts the user to enter two integers, reads them into variables `a` and `b`, and then uses an if-else statement to check which condition is true. If `a` is less than `b`, it prints that `a` is less than `b`. If `a` is equal to `b`, it prints that `a` equals `b`. Otherwise, if `a` is greater than `b`, it prints that `a` is greater than `b`.

