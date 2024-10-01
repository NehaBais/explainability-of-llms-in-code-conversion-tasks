Here is the equivalent C code for your Python script. 

The following program will take two integers as inputs from the user and checks if one integer is less than, greater than or equal to the other.

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
    } else  {
       printf("a is equal to b\n"); 
   }
   return 0;
}
```
