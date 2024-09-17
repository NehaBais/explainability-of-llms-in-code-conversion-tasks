Below is the C version of your JavaScript function. Note that C doesn't have a built-in alert function to display output, so for simplicity's sake, we're just printing out the results with printf.

```c
#include <stdio.h>

void bitwiseAndOrXor(int a, int b){
    printf("a AND b: %d\n", (a & b));
    printf("a OR b: %d\n", (a | b)));
    printf("a XOR b: %d\n", (a ^ b)));

    // bitwise NOT in C is simply ~
    printf("NOT a: %d\n", ~a);

    // left shift and right rotate in C
    int c = a << b; // equivalent to JavaScript's (a << b)
    printf("a << b: %d\n", c)); 

    // arithmetic right shift in C is done with >> operator
    c = a >> b; 
    printf("a >> b: %d\n", c));

    // logical right shift in C, equivalent to (b >= sizeof(int)) ? 0 : (a >>> b)) 
    c = (b >= sizeof(int)) ? 0 : (a >>> b));
    printf("a >>> b: %d\n", c));
}
```
This solution converts the JavaScript function you provided into equivalent C code. The output is printed to stdout using the printf function, which replicates the functionality of the JavaScript alert function.
