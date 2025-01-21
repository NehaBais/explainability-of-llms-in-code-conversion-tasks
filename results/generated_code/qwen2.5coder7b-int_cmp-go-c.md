Here is the equivalent code in C:

```c
#include <stdio.h>

int main() {
    int n1, n2;
    
    printf("Enter number: ");
    if (scanf("%d", &n1) != 1) {
        printf("Invalid input\n");
        return 1; // Exit with error status
    }
    
    printf("Enter number: ");
    if (scanf("%d", &n2) != 1) {
        printf("Invalid input\n");
        return 1; // Exit with error status
    }

    if(n1 < n2)
        printf("%d less than %d\n", n1, n2);
    else if(n1 == n2)
        printf("%d equal to %d\n", n1, n2);
    else
        printf("%d greater than %d\n", n1, n2);

    return 0;
}
```

In this C code:

- `printf` and `scanf` are used to print and read input, respectively.
- The `if (scanf(...)) != 1` condition checks if the user input was a valid integer. If it wasn't, an error message is printed, and the program exits with an error status using `return 1`.
- The logic for comparing two integers is implemented using `if`, `else if`, and `else` statements.
- C doesn't have a built-in switch-case structure that can compare multiple conditions in one go as Golang does. So, we use multiple if-else statements to achieve the same functionality.
