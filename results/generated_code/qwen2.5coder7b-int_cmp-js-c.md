Here's how you can convert this JavaScript code to C:

```c
#include <stdio.h>

void compare(int a, int b)
{
    if(a == b)
        printf("%d equals %d\n", a, b);
    else if(a < b)
        printf("%d is less than %d\n", a, b);
    else
        printf("%d is greater than %d\n", a, b);
}

int main()
{
    int num1, num2;
    
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    compare(num1, num2);

    return 0;
}
```

This C code does exactly the same as your JavaScript code. It prompts for two integers from the user and displays a message indicating whether the first integer is less than, equal to or greater than the second one. Note that in C we are using `scanf` to take input from the user because there's no built-in function like `print` in JavaScript. And also remember that in C all comparison operators work with both integers and floating point numbers unlike in JavaScript where you'd need to use type coercion for comparisons.
