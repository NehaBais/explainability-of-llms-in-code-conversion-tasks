Below is the C code equivalent to your JavaScript function. It covers all five operations - bitwise AND, OR, XOR, NOT and shifts/rotates. Here are some important notes about C syntax that might be helpful:
- The `~` operator is used for bitwise complement operation which is equivalent of logical NOT in C but it will give incorrect result as not every bit in 32 bits integer can be flipped like in Java where we have only 31 bits. Therefore, I am using a loop to iterate through each bit and flip it.
- The `<<` operator does left shift while the `>>` operator does arithmetic right shift which is equivalent of logical right shift in JavaScript.
- In C, there's no built-in way for a left rotate or right rotate operation so we need to manually implement them using bit manipulation and shifting operations.

Here's the complete code:
```c
#include<stdio.<｜begin▁of▁sentence｜>

//Function to perform bitwise operations
void bitwise(int a, int b) {
   printf("a AND b: %d\n", (a & b));
   printf("a OR b: %d\n", (a | b));
   printf("a XOR b: %d\n", (a ^ b));
   
   // Bitwise complement for a
   int not_a = ~a;
   printf("NOT a: ");
   for(int i=0; i<32; ++i){
       if(!((not_a >> i) & 1))
           printf("%d ", i);
   }
   
   printf("\na << b: %d\n", (a << b)); // left shift
   printf("a >> b: %d\n", (a >> b)); // arithmetic right shift
}

//Function to perform left rotate 
int left_rotate(int n, unsigned int rotation) {  
    return (n << rotation) | (n >> (32 - rotation));
}

//Function to perform right rotate 
int right_rotate(int n, unsigned int rotation) {  
    return (n >> rotation) | (n << (32 - rotation));
}

int main() {
   int a = 5; //For example
   int b = 1;
   
   bitwise(a,b); 
   printf("Left rotate of a: %d\n", left_rotate(a,b));
   printf("Right rotate of a: %d\n", right_rotate(a,b));
    
   return 0;
}
```
This program will perform bitwise operations on two integers `a` and `b`. It also includes left rotation (`left_rotate()`) and right rotation (`right_rotate()`). The NOT operation in C prints all bits that are not set to 1, but it's not a typical behavior like JavaScript where we print only flipped bit positions. You can adjust the code according to your needs if you want the traditional way of showing flipped bit positions in the NOT case.

