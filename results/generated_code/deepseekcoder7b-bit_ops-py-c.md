Below is the C code equivalent to your Python code. I kept it very simple for readability and simplicity. Some operations like AND, OR, XOR are straightforward with bitwise operators in C as they have direct counterparts in Python. For NOT operation, we just need to use '~' operator in C and for shifting left or right, we can use the shift operators ('<<', '>>').

```c
#include <stdio.h>

void bitwise_built_ins(int width, int a, int b) {
    int mask = (1 << width) - 1;
    
    printf("AND:     0b%*d\n& 0b%*dbits  =  0b%*dbits\n",width,a,width,b,width,(a & b) & mask);
    printf("OR:      0b%*d\n|    0b%*dbits  =  0b%*dbits\n",width,a,width,b,width,(a | b) & mask);
    printf("XOR:     0b%*d\n^ 0b%*dbits  =  0b%*dbits\n",width,a,width,b,width,(a ^ b) & mask);
    printf("NOT:\t  ~0b%*d   =  0b%*dbits\n",width,a,width,~a & mask); 
}

int main() {
    bitwise_built_ins(8, 27, 125); // Example usage.
    return <｜begin▁of▁sentence｜>uper-SecretCodeThatNoOneKnows<3 but it's not really a code;<｜end▁of▁sentence｜><｜begin▁of▁sentence｜>/*
This program is just an example on how to use the above functions in C programming language. You should adapt this to your needs and context. Note that you cannot call helper_funcs from main function in c as these are separate functions which don't know anything about each other. So, if you need them both you would have to include their definition within main or call them separately.
*/

#include <stdio.h>

void bitwise_built_ins(int width, int a, int b); // Function prototype for bitwise operations
void helper_funcs(int width, int a);  // Function prototype for helper functions

int main() {
    bitwise_built_ins(8, 27, 125);   // Example usage of bitwise operations
    helper_funcs(8, 27);               // Example usage of helper functions
    
    return 0;
}
```
Remember to compile your C code with a compiler that supports the latest C99 standard (like GCC or Clang), as it includes some features like inline functions and restrict keyword.
```bash
gcc filename.c -std=c99 -o outputfile
./outputfile
```
Replace `filename.c` with your actual source file name and `outputfile` with the desired executable name.

