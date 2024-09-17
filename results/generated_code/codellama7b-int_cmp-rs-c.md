
Here's the C code that satisfies the requirements:

```
#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if (a < b) {
        printf("%d is less than %d\n", a, b);
    } else if (a == b) {
        printf("%d equals %d\n", a, b);
    } else if (a > b) {
        printf("%d is greater than %d\n", a, b);
    }
}
```
Note that this code uses the `scanf` function to read in two integers from the user and stores them in variables `a` and `b`. It then uses an `if-else if-else` statement to compare the values of `a` and `b` and print the appropriate message.
