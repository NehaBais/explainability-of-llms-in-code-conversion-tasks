This JavaScript code converts to C as follows:

In C, the standard library does not provide a built-in function for reading console input or displaying output directly, so we need to use printf() and scanf() functions from stdio.h library which is similar to print and scan in C++ libraries.

```c
#include <stdio.h>
int main(){
    // Variables declaration
    int a, b;

    // Input the two integers from user
    printf("Enter first integer: ");
    scanf("%d", &a);
    printf("Enter second integer: ");
    scanf("%d", &b);

    // Compare and display the conditions
    if (a == b) {
        printf("%d equals %d\n", a, b);
    }
    else if (a < b){
        printf("%d is less than %d\n", a, b);
    }
    else{
        printf("%d is greater than %d\n", a, b);
    }

    return 0;
}
```
This C code does exactly the same as your JavaScript function. It reads two integers from the user, then checks if they're equal, less or greater than each other, and outputs the result to the console in an appropriate format.
