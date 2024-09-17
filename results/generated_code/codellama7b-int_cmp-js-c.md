In C, you can use the following code to compare two integers:
```
#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    
    if (a == b) {
        printf("The numbers are equal.\n");
    } else if (a < b) {
        printf("The number %d is less than the number %d\n", a, b);
    } else {
        printf("The number %d is greater than the number %d\n", a, b);
    }
    
    return 0;
}
```
This code uses the `scanf` function to read in two integers from the user and stores them in variables `a` and `b`. It then compares the values of `a` and `b` using the `==`, `<`, and `>` operators, respectively. The output is printed to the console using the `printf` function.

Note that in C, it is not necessary to use type coercion when comparing integers, as the `==` operator can be used to compare values of different types (e.g., an integer and a floating-point number). However, if you want to ensure that the comparison is done using integer arithmetic, you can cast one of the operands to an integer using the `(int)` typecast. For example:
```
if ((int)a == b) {
    // do something
}
```
This will force the `a` variable to be treated as an integer during the comparison.
