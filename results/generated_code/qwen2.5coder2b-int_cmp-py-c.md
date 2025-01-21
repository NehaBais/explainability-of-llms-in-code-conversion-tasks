Sure, here's the equivalent code in C:

```c
#include<stdio.h>

int main() {
    int a, b;

    printf("Enter value of a: ");
    scanf("%d", &a);

    printf("Enter value of b: ");
    scanf("%d", &b);

    if(a < b) {
        printf("a is less than b\n");
    }
    else if(a > b) {
        printf("a is greater than b\n");
    }
    else if(a == b) {
        printf("a is equal to b\n");
    }

    return 0;
}
```

This code first includes the `stdio.h` header file which contains functions for input/output operations.
Then, it declares two integer variables `a` and `b`.
Next, it prompts the user to enter values for `a` and `b`, reads the input using `scanf()`, stores them in their respective variables, and then checks if each condition (less than, greater than, or equal to) is true by using the `if-elif-else` statement.
Finally, the program outputs a message based on which condition was true.
