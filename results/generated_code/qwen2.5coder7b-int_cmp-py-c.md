Here's how you can convert the Python code into C:

```c
#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter value of a: ");
    scanf("%d", &a);

    printf("Enter value of b: ");
    scanf("%d", &b);
    
    if (a < b)
        printf("a is less than b\n");
    else if (a > b)
        printf("a is greater than b\n");
    else
        printf("a is equal to b\n");

    return 0;
}
```

This C code does the same thing as your Python script. It gets two integers from the user, and then it tests whether each number is less than, greater than, or equal to the other. Depending on the outcome of these tests, a message will be printed out indicating which condition is true.
