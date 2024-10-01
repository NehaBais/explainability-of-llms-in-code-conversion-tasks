Sure, here is the equivalent C code for the given Python program. Please note that in C, we don't have direct input like Python, so we need to assign values to variables manually. 

```c
#include <stdio.h>
int main() {
    int a, b;

    a = 10;  // example user entered values
    b = 20;
   
    if (a < b) {
        printf("a is less than b\n");
    } else if (a > b) {
        printf("a is greater than b\n");
    } else if (a == b) {
        printf("a is equal to b\n");
    } 

    return 0;  // exit program
}
```
This C program does exactly what your Python program does. It asks for two integer inputs and checks which one is lesser, greater or equal to the other.
