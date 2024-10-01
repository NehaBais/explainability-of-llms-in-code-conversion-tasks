This code does not directly translate into C because the Rust standard library doesn't have equivalent functionality for handling user input in the same way that the C language does. 

However, you can still perform similar operations in C using functions like `scanf()` from `stdio.h` or `gets()` and `puts()` from `stdio.h`. Here's an example of how to achieve a similar result:
```C
#include <stdio.h>

int main() {
    int a, b;
    printf("Enter first integer:\n");
    scanf("%d", &a);
    printf("Enter second integer:\n");
    scanf("%d", &b);
    if (a < b) {
        printf("The first integer is less than the second one.\n");
    } else if (a == b){
        printf("The first integer equals to the second one.\n");
    } else if (a > b) {
        printf("The first integer is greater than the second one.\n");
    };
    return 0;
}
```
This program will get two integers from the user, then compare them and print a message based on which one is greater. Please remember to include `stdio.h` header file in your C program for the scanf() function to work.
