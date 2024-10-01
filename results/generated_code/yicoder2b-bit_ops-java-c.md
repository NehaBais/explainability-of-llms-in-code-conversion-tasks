This is how the equivalent C code would look like:
```c
#include <stdio.h>

void bitwise(int a, int b){
  // Bitwise AND of two integers
  printf("a AND b: %d\n", a & b);

  // Bitwise OR of two integers
  printf("a OR b: %d\n", a | b);

  // Bitwise XOR of two integers
  printf("a XOR b: %d\n", a ^ b);

  // Bitwise NOT of first integer
  printf("NOT a: %d\n", ~a);

  // Left shift of the first integer with respect to the second integer
  printf("a << b: %d\n", a << b); 

  // Arithmetic right shift of the first integer with respect to the second integer
  printf("a >> b: %d\n", a >> b); 

  // Logical right shift of the first integer with respect to the second integer
  printf("a >>> b: %d\n", a >>> b); 
}
```
Please note that the rotate operations are not directly available in C. The equivalent is achieved by creating two helper functions `Integer.rotateLeft()` (Java 1.5+) and `Integer.rotateRight()` (Java 1.5+) which are not part of standard library in C, so they have been added to emulate these operation.
In order to compile the code properly you need to have gcc compiler installed. Afterwards, if you want to execute the compiled code you can simply type `./a.out` into your terminal (assuming you named your executable as 'a').
