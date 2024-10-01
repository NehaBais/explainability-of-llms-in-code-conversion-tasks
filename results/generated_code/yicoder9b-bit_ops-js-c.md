In C programming, the bitwise operations are similar to JavaScript but there's no built-in operator for '>>>' which is logical right shift. We can emulate it using a combination of arithmetic right shift (>>) and bitwise AND with the mask derived from the size of int in bits. Also note that C doesn't have an alert function, we will use printf instead:
```c
#include <stdio.h>
#include <limits.h> // for CHAR_BIT

void bitwise(int a, int b){
    printf("a AND b: %d\n", (a & b));
    printf("a OR b: %d\n", (a | b));
    printf("a XOR b: %d\n", (a ^ b));
    printf("NOT a: %d\n", ~a);
    printf("a << b: %d\n", (a << b)); // left shift
    printf("a >> b: %d\n", (a >> b)); // arithmetic right shift
  
    // logical right shift
    int mask = -1; 
    mask = mask >> b; 
    printf("a >>> b: %d\n", ((unsigned)a >> b) & mask);
}

int main(){
   bitwise(10,2);
   return 0;
}
```
