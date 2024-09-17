The C code is as follows. Note that bitwise NOT (!) is done with ~ operator, but it requires casting to the same data type in this case (u8). Also, there's no built-in rotation operators for integers in C, so these operations are performed manually through left shift and right shift.
```c
#include <stdio.h>

int main() {
    unsigned char a = 105;
    unsigned char b = 91;
    
    printf("a      = %8.2ib\n", a);
    printf("b      = %8.2ib\n", b);
    printf("a | b  = %8.2ib\n", a | b);
    printf("a & b  = %8.2ib\n", a & b);
    printf("a ^ b  = %8.2ib\n", a ^ b);
    printf("!a     = %8.2ib\n", ~a + 1);  // bitwise not, then invert the bits to get positive number.
    unsigned char shift_amount = 3;
    printf("a << %d  = %8.2ib\n", shift_amount, a << shift_amount);  
    printf("a >> %d = %8.2ib\n", shift_amount, a >> shift_amount);  // right arithmetic shift
    
    return 0;
}
```
Note: The bitwise rotation operations (left rotate and right rotate) are not directly supported by C language so we have to write our own helper functions for that. But since you specifically asked for the "left rotate" operation, I will include it here as well. For a complete solution with all the mentioned operations including right rotate, some additional code would be required.
```c
unsigned char left_rotate(unsigned char n, unsigned char c) { 
    return (n << c) | (n >> (8 - c));  
} 
```
And you can call this function to perform the rotation operation as follows:
```c
printf("a rotated by %d = %8.2ib\n", shift_amount, left_rotate(a,shift_amount));  
```

