The equivalent C code would be:

```c
#include <stdio.h>

void print_logic(int a, int b) {

    printf("%d\n", (a && b))); 
    printf("%d\n", (a || b)));
    printf("%d\n", (!a)))); 
}

int main() {
    print_logic(1, 1); 
    print_logic(0, 1);  
    return 0;
}
```
The code basically does the same thing as your C++ function. It takes two boolean values a and b as input to the function print_logic().
Inside the print_logic() function, it first prints the result of "and" operation between arguments a and b. Then it prints the result of "or" operation between arguments a and b. Finally, it prints the result of "not" operation on argument a. 

Note: Since C doesn't support Boolean datatype natively, 'int' type is used here as an equivalent datatype to boolean.
```
