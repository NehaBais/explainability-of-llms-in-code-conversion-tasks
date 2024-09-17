## Solution:
```
#include <stdio.h>
// using scanf to get input from user rather than prompt as in Java Script version, since there's no browser support for prompting users through JavaScript
int main() {
    int a; // define variable "a" with type integer (only integers)
    int b; // define variable "b" with type integer
    printf("Please enter two numbers to compare using 'Enter' as the separator: ");
    scanf("%d %d", &a, &b); // get input from user through console and store into variables a and b respectively
    if (a == b) {
        printf("%d is equal to %d\n", a, b);
    } else if (a > b) {
        printf("%d is greater than %d\n", a, b);
    } else if (a < b) {
        printf("%d is less than %d\n", a, b);
    }
}
```
