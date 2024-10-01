This is the equivalent C code for your Golang program:

```c
#include <stdio.h>

int main() {
    int n1, n2;

    // Get two integers from user
    printf("Enter number: ");
    scanf("%d", &n1);
    printf("Enter number: ");
    scanf("%d", &n2);

    /*
     * Test the condition for each case separately
     */
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
