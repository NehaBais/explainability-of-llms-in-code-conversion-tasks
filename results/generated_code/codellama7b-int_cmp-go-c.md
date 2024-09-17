Sure, I can help you with that! Here's the code in C:
```
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1, n2;

    printf("Enter the first number: ");
    scanf("%d", &n1);

    printf("Enter the second number: ");
    scanf("%d", &n2);

    if (n1 < n2) {
        printf("%d is less than %d\n", n1, n2);
    } else if (n1 == n2) {
        printf("%d is equal to %d\n", n1, n2);
    } else if (n1 > n2) {
        printf("%d is greater than %d\n", n1, n2);
    }

    return 0;
}
```
This code uses the `scanf` function to read two integers from the user and store them in `n1` and `n2`, respectively. Then it checks the condition of whether `n1` is less than, equal to, or greater than `n2` using an `if-else if-else` statement. If `n1` is less than `n2`, it will print "less than", if `n1` is equal to `n2`, it will print "equal to", and if `n1` is greater than `n2`, it will print "greater than". Finally, the function returns 0.

Note that this code uses the `<stdio.h>` and `<stdlib.h>` header files for input/output operations and memory management, respectively.
