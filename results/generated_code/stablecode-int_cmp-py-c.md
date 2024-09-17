Here's your Python code converted into C language. 

I've opted for the `scanf` function for getting input from the user, because `scanf` is more flexible when it comes to input types (like int or float)).

```c
#include <stdio.h>

int main() {
    int a, b;

    printf("Enter value of a: ");
    scanf("%d", &a);

    printf("Enter value of b: ");
    scanf("%d", &b);

    if (a < b) {
        printf("a is less than b\n");
    } else if (a > b) {
        printf("a is greater than b\n");
    } else if (a == b) {
        printf("a is equal to b\n");
    }

    return 0;
}
```
This code snippet receives two integer values `a` and `b`. Then, it prints an appropriate message based on the comparison of `a` and `b`. The conditional statements are separately tested with all three comparison operators (`<`, `==`, and `>`), thereby ensuring that all cases are covered.
