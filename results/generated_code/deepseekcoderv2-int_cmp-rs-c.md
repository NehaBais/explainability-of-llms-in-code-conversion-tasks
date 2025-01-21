 Sure, here's the equivalent code in C:

```c
#include <stdio.h>

int main() {
    int a, b;
    
    // Get two integers from the user
    printf("Enter the first integer: ");
    scanf("%d", &a);
    printf("Enter the second integer: ");
    scanf("%d", &b);
    
    // Display a message based on the comparison of the two integers
    if (a < b) {
        printf("%d is less than %d\n", a, b);
    } else if (a == b) {
        printf("%d equals %d\n", a, b);
    } else if (a > b) {
        printf("%d is greater than %d\n", a, b);
    }
    
    return 0;
}
```

This C code performs the same operations as your Rust code: it reads two integers from the user, compares them using conditional statements (`if`, `else if`, and `else`), and prints out the appropriate message based on the comparison results.
