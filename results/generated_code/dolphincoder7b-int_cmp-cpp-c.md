This code snippet can be converted to C using the following conversion tool: http://www.convert-csharp-to-c.com/. However, as there are multiple languages involved (C++, Java), I will provide a generic example in C. Here is how the C version of this C++ program might look:
```c
#include <stdio.h>
int main() {
    int a, b;

    if (!scanf("%d %d", &a, &b)) {
        printf("could not read numbers\n");
        return 1;
    }

    // test for less-than
    if (a < b)
        printf("%d is less than %d\n", a, b);

    // test for equality
    if (a == b)
        printf("%d is equal to %d\n", a, b);

    // test for greater-than
    if (a > b)
        printf("%d is greater than %d\n", a, b);

    return 0;
}
```
This program will compile and run on most C compilers. If you need further assistance, please provide more specific details regarding the exact platform you're using or any particular issues you may be facing during the conversion process.
