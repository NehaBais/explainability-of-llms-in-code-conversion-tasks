 In C, the code would look like this:

```c
#include <stdio.h>

int main()
{
  int a, b;

  printf("Enter two integers: ");
  scanf("%d %d", &a, &b);

  // test for less-than
  if (a < b)
    printf("%d is less than %d\n", a, b);

  // test for equality
  if (a == b)
    printf("%d is equal to %d\n", a, b);

  // test for greater-than
  if (a > b)
    printf("%d is greater than %d\n", a, b);
}
```
Please note that in C language you can't use `!` operator with `scanf`. For checking the `failure of scanf`, it checks whether there has been any error while reading integer which is not applicable for integer inputs.
