The error message indicates that there are multiple issues with the code. The first error is that the compiler cannot find the `printf` function because it has not been declared at the top of the file. To fix this, you need to include the `<stdio.h>` header file at the beginning of your code to provide the declaration for `printf`.

The second error is that there are calls to undeclared functions, such as `rotl`, which also need to be declared or defined in the code. In this case, the error message suggests that the function `rotr` should be used instead, but the compiler does not recognize it. To fix this, you need to define the `rotr` function at some point in your code before calling it.

The third and fourth errors are related to missing semicolons at the end of certain lines. These errors can cause the compiler to stop processing the file after encountering these issues. To fix this, you need to add a semicolon at the end of each line where an error is reported.

Finally, the warning messages indicate that there are extra arguments in some format strings, which may result in unexpected behavior or errors. To fix this, you need to ensure that the number of arguments passed to the `printf` function matches the format specifiers used in the string.

Here is the corrected code:

```c
#include <stdio.h>

unsigned int rotl(int width, unsigned int a, int n) {
    return (a << n) | (a >> (width - n));
}

unsigned int rotr(int width, unsigned int a, int n) {
    return (a >> n) | (a << (width - n));
}

int main() {
    printf("    AND:     0b%0*b \n           & 0b%0*b \n           = 0b%0*b\n",
           2, 5, 10,
           2, 7, 8);

    unsigned int a = 5;
    printf("    AND:     0b%0*b \n           & 0b%0*b \n           = 0b%0*b\n",
           3, a, 2, 4, a>>2);

    return 0;
}
```

