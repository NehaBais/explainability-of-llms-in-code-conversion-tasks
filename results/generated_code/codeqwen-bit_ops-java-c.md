The equivalent C code for the given Java code would be as follows:

```c
#include <stdio.h>
#include <stdlib.h>

void bitwise(int A, int b) {
  printf("A AND b: %d\n", (A & b));
  printf("A OR b: %d\n", (A | b));
  printf("A XOR b: %d\n", (A ^ b));
  printf("NOT a: %d\n", ~A);
  printf("A << b: %d\n", (A << b)); // left shift
  printf("A >> b: %d\n", (A >> b)); // arithmetic right shift
  printf("A >>> b: %d\n", (unsigned int)A >> b); // logical right shift
  int a_rotated_left = A;
  for(int i = 0; i < b; ++i) {
    A_rotated_left <<= 1;
    if((A_rotated_left & (1<<31)) != 0) {
      A_rotated_left |= 1;
    } else {
      A_rotated_left &= ~(1<<31);
    }
  }
  printf("A rol b: %d\n", A_rotated_left); //rotate left
  int A_rotated_right = A;
  for(int i = 0; i < b; ++i) {
    if((A_rotated_right & (1<<31)) != 0) {
      A_rotated_right |= 1;
    } else {
      A_rotated_right &= ~(1<<31);
    }
    unsigned int mask = 0xFFFFFFFF << (32-b);
    mask >>= b;
    A_rotated_right <<= b;
    A_rotated_right |= A_rotated_right & mask;
  }
  printf("A ror b: %d\n", A_rotated_right); //rotate right
}

int main() {
  bitwise(10, 2);
  return 0;
}
```

Note that, in C, bitwise operations are performed on the left operand only. This means that the result of a bitwise operation is always an integer, and not an instance of any other type. As such, to get rid of signed overflow when rotating integers, the code above performs these rotations by manually shifting the bits around using bitwise operators.
