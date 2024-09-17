Below is the equivalent C code for your Java program:

```C
#include <stdio.h>

int main() {
   int a, b;
   printf("Enter two integers:\n");
   scanf("%d%d", &a, &b);
   
   int sum = a + b;         // The result of adding  'a' and 'b'
   int difference = a - b;  // The result of subtracting 'b' from 'a'
   int product = a * b;     // The result of multiplying 'a' and 'b'
   float division = (float)a / b;    // The result of dividing 'a' by 'b'. Here we have to typecast one operand as float for proper division.
   int remainder = a % b;   // The remainder of dividing  'a' by 'b'
   
   printf("a + b = %d\n", sum);
   printf("a - b = %d\n", difference);
   printf("a * b = %d\n", product);
   printf("quotient of a / b (rounded towards zero)= %.2f\n", division);    // truncates towards 0
   if(b!=0){           /*checking for denominator being non-zero before printing the remainder*/
       printf("remainder of a / b = %d\n", remainder);    // same sign as first operand
   }else{
      printf("Cannot perform division by zero.\n"); 
   }
   
   return 0;
}
```
Please note: In C, the division operator `/` always rounds towards zero. This means it truncates to the nearest lower integer value. If you need a different rounding behavior (like towards negative infinity), you will have to handle that in your code separately. The remainder has the same sign as first operand just like the Java version but be aware of division by zero, which is undefined behaviour in both languages.

