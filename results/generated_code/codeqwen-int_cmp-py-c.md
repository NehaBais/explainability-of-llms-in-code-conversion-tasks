Here is the equivalent code in C:

```c
#include <stdio.h>

int main() {
   int A, B;
   printf("Enter value of A: ");
   scanf("%d", &A);
   printf("Enter value of B: ");
   scanf("%d", &B);

   if (A < B) {
      printf("A is less than B\n");
   } else if (A > B) {
      printf("A is greater than B\n");
   } else {
      printf("A is equal to B\n");
   }

   // Test case for each comparison operator separately
   printf("\nTesting condition for different cases\n");

   If (A < B) {
      printf("Case 1: A is less than B.\n");
   } else {
      if(A == B){
         printf("Case 2: A is equal to B.\n");
      }else{
         printf("Case 3: A is greater than B.\n");
      }
   }

   return 0;
}
```

This C program does exactly the same as your Python code. It first asks for two integer inputs from the user, then prints a message depending on whether the first integer is less than, equal to or greater than the second one. The "Testing condition for different cases" part of the code illustrates how you can test all three comparison operators separately.
