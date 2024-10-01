Here's the equivalent C code for your given C++ program: 

```c
#include <stdbool.h> // For boolean data type
#include <stdio.h>   // For printf function

void printLogic(bool a, bool b) {
  printf("a and b is %d\n", (a && b));
  printf("a or b is %d\n", (a || b));
  printf("not a is %d\n", !a);
}

int main() {
    bool a = true; // change these values to test the function with different inputs.
    bool b = false;
    printLogic(a,b);
    return 0;
}
```
In C language, 'true' and 'false' are represented as '1' and '0' respectively in the print statements (as well as when defining them). So instead of std::boolalpha which allows bools to be written as "true" or "false" like in your original code, we just simply use the int type that will convert true and false into 1s and 0s respectively.
Also note that C language does not support 'endl' operation like C++, so we use '\n' for new line operations.
