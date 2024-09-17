 The JavaScript code can't be directly translated to C, as they're two different languages with different syntax, libraries, and functionality. However, we can write equivalent code in C that gets two integers from the user and compares them according to your specifications:

```c
#include <stdio.h>

int main() {
    int a, b;
    printf("Enter first integer: ");
    scanf("%d", &a);
    printf("Enter second integer: ");
    scanf("%d", &b);

    if (a == b) {
        printf("%d equals %d\n", a, b);
    }

    if (a < b) {
        printf("%d is less than %d\n", a, b);
    }

    if (a > b) {
        printf("%d is greater than %d\n", a, b);
    }
    
    return 0;
}
```
In this C code, we're prompting the user to enter two integers. We then compare these values according to your specifications and print out relevant messages based on the comparison results. Note that in C, there is no direct way of printing without a newline character (`\n`) at the end of string, hence we have used `printf()` for each condition separately.
