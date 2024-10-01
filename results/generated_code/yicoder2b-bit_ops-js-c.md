The equivalent C code for the given JavaScript function would be as follows: 

```c
#include <stdio.h>
#include <stdlib.h>

void bitwise(int a, int b){
   // Perform Bitwise AND operation
   printf("a & b: %d\n", a & b);

   // Perform Bitwise OR operation
   printf("a | b: %d\n", a | b);

   // Perform Bitwise XOR operation
   printf("a ^ b: %d\n", a ^ b);

   // Perform Bitwise NOT on integer 'a' 
   printf("~a: %d\n", ~a);

   // Left shift operation of first integer with number of bits of second integer
   printf("a << b: %d\n", a << b); // equivalent to left shift

   // Right shift operation on the first integer with number of bits of second integer
   printf("a >> b: %d\n", a >> b); 
   
   // Arithmetic right shift operation on the first integer with number of bits of second integer
   printf("a >>> b: %d\n", a >>> b); // equivalent to unsigned right shift
}
```
Please remember that C does not have an exact counterpart for JavaScript's `alert()` function. Here we used `printf()` instead to output the results of the operations.
