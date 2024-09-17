The JavaScript to C conversion code is as follows:

```c
#include <stdio.h>

void compare(int a, int b) {
    if (a == b) {
        printf("%d equals %d\n", a, b);
    } else if (a < b) {
        printf("%d is less than %d\n", a, b);
    } else if (a > b) {
        printf("%d is greater than %d\n", a, b);
    }
}
```

This code defines a function `compare` that takes two integers as arguments. The function then checks the relationship between the first integer and the second integer using three comparison operators (`==`, `<`, `>`). Depending on the relationship between the two integers, the corresponding message is printed to the console.
