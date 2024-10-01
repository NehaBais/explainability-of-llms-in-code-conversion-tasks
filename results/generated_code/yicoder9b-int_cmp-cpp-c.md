Here's the equivalent C code:

```c
#include <stdio.h>
int main() {
   int a, b;
   printf("Enter two integers:\n");
   if (scanf("%d %d", &a, &b) != 2) {
      fputs("could not read the numbers\n", stderr);
      return 1;
   }
   // test for less-than
   if (a < b)
     printf("%d is less than %d\n", a, b);

   // test for equality
   else if (a == b)
     printf("%d is equal to %d\n", a, b);

   // test for greater-than
   else 
     printf("%d is greater than %d\n", a, b);
}
```
