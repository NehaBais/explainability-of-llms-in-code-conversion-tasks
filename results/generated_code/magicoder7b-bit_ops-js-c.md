 In C, you can perform the bitwise operations as well as shifts and rotates using the `&`, `|`, `^` symbols for AND, OR, and XOR respectively. The ~ symbol is used for NOT. The << operator is for left shift while >> is for right (arithmetic) shift. 

Here's how you can implement the above JavaScript functions in C:

```c
#include <stdio.h>

void bitwise(int a, int b){
   printf("a AND b: %d\n", a & b);
   printf("a OR b: %d\n", a | b);
   printf("a XOR b: %d\n", a ^ b);
   printf("NOT a: %d\n", ~a);
   printf("a << b: %d\n", a << b); // left shift
   printf("a >> b: %d\n", a >> b); // arithmetic right shift
   printf("a >>> b: %d\n", (unsigned int)a >> b); // logical right shift
}

int main(){
    bitwise(10, 2);
    return 0;
}
```
In this C code, the `bitwise` function performs all required operations. The shifts are of `b` places to the left and right as per JavaScript's shift operators. As for the rotate operation, there is no direct equivalent in C like JavaScript's array.prototype.rotate(). So we need to manually implement it using combination of bit manipulation operations. 
Please note that the C language does not have built-in functions to perform logical right shift as used in the JavaScript code. We use `unsigned int` for the second argument so that overflow doesn't occur during the right shift operation.
