Here's the equivalent C code for your Rust program. Please note that there are no built-in functions or libraries in C to directly compare two numbers as in your Rust code. So we need to implement it manually using if-else conditions:

```C
#include <stdio.h> 

int main() {
    int a, b;  // The integers that will be compared
    printf("Please enter the first integer:\n");
    scanf("%d", &a);
    printf("Please enter the second integer:\n");
    scanf("%d", &b); 
    if ( a < b ) {
        printf("%d is less than %d\n", a, b );
    } else if ( a == b) {
        printf("%d equals %d\n", a, b);
    }  else if (a > b) { 
         printf("%d is greater than %d\n", a, b);
    }
    return 0;
}
```
This C code gets two integers from the user and prints a message depending on whether the first integer is less than, equal to or greater than the second one.
