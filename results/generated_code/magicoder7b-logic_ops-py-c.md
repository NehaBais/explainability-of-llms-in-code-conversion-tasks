 In C language, you can use the logical operators && (and), || (or), ! (not). But there is no direct method to return these results. The following code will perform similar tasks but does not directly return values. Instead, it uses printf() to display the output:

```c
#include <stdio.h>

void logic(int a, int b) {
    // Print 'a and b' result
    if (a && b)
        printf("a and b: true\n");
    else
        printf("a and b: false\n");
    
    // Print 'a or b' result
    if (a || b)
        printf("a or b: true\n");
    else
        printf("a or b: false\n");
    
    // Print 'not a' result
    if (!a)
        printf("not a: true\n");
    else
        printf("not a: false\n");
}
```
You can call this function `logic` with two boolean arguments to see the output. For instance, `logic(1, 0);`.
