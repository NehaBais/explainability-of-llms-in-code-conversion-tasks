In C language, you can use scanf function to get user inputs. Since there's no built-in way to handle string concatenation in the same manner as JavaScript, it would be best to print each comparison separately.

Here is the equivalent code:

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
In this code, the user input for two integers 'a' and 'b' is taken from console using `scanf()`. The conditional statements are used to print the appropriate message based on comparison of 'a' and 'b'.
