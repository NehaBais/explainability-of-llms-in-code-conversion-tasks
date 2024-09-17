 ```c
#include<stdio.h>
int main() {
    int a, b;
    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);
    
    if (a < b) {
        printf("a is less than b\n");
    } else if(a > b) {
        printf("a is greater than b\n");
    } else if(a == b) {
        printf("a is equal to b\n");
    }
    
    return 0;
}
```
In this C code, the `scanf` function is used to take inputs from user. The conditions for each case of comparison are handled in an else if ladder. If the first integer a is less than, equal to or greater than the second integer b then corresponding message will be printed out according to the condition. 

Note: In C language, you don't have any direct built-in function like input() in Python to get integers from user as a string and then convert that into an integer. So, we directly read the integer inputs using `scanf()`.
