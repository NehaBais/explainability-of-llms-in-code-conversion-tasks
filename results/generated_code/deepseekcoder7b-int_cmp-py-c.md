Sure, here you go. This code will be in C programming language instead of Python.

```c
#include <stdio.h>
int main() {
   int a, b;
   printf("Enter value of a: ");
   scanf("%d", &a);
   
   printf("Enter value of b: ");
   scanf("%d", &b);

   if (a < b) {
      printf("a is less than b\n");
   } else if (a > b) {
      printf("a is greater than b\n");
   } else if (a == b) {
      printf("a is equal to b\n");
   }
   
   return 0;
}
```
This C code will ask the user for two integer inputs. It then compares these two numbers using a simple comparison statement, and based on which condition is met (if 'a' less than 'b', if 'a' greater than 'b', or if they are equal), it prints out an appropriate message to the console.

