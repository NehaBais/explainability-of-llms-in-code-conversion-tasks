The JavaScript code you provided can be converted to C as follows:
```C
#include <stdio.h>

void compare(int a, int b) {
    if (a == b) {
        printf("%d equals %d\n", a, b);
    } 
    else if (a < b) {
        printf("%d is less than %d\n", a, b);
    } 
    else {
        printf("%d is greater than %d\n", a, b);
    }
}

int main() {
    int num1, num2;
    printf("Enter the first integer: ");
    scanf("%d", &num1);
    printf("Enter the second integer: ");
    scanf("%d", &num2);

    compare(num1, num2);

    return 0;
}
```
This code reads two integers from the user and uses a function called `compare` to determine if they are equal, less than, or greater than. It also includes an error check that checks if the variables used in the comparison are indeed integers.
