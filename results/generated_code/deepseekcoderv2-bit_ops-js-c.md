 Below is the C code that performs the same bitwise operations as your JavaScript function. Note that in C, `~` is used for bitwise NOT, and both left (`<<`) and right (`>>`) shifts are supported with arithmetic (for signed integers) and logical (for unsigned integers) versions. There is no direct equivalent of JavaScript's left rotate (`a << b`) and right rotate (`a >> b`), but you can implement them using a combination of shifts and or operations if needed.

```c
#include <stdio.h>

void bitwise(int a, int b) {
    printf("a AND b: %d\n", (a & b));
    printf("a OR b: %d\n", (a | b));
    printf("a XOR b: %d\n", (a ^ b));
    printf("NOT a: %d\n", ~a);
    
    // In C, the right shift operations are arithmetic if the value is signed, and logical if it's unsigned.
    printf("a << b: %d\n", (a << b)); // left shift
    printf("a >> b: %d\n", (a >> b)); // arithmetic right shift for signed integers
    printf("a >>> b: %u\n", (unsigned int)(a) >> b); // logical right shift for unsigned integers, cast to unsigned to avoid sign extension issues
}

int main() {
    int a = 29; // Example values
    int b = 4;
    bitwise(a, b);
    return 0;
}
```

Please note that in C, the logical right shift (`>>>`) is not directly supported. You can implement it by casting the integer to `unsigned` before shifting, which avoids sign extension and mimics the behavior of a logical right shift. In this example, I cast `a` to `unsigned int` for the logical right shift operation.
