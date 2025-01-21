 Here's the equivalent code in C, using the `std` library for string manipulation:

```c
#include <stdio.h>
#include <string.h>

int main() {
    char greeting[] = "Hello";
    strcat(greeting, ", world!");
    printf("%s\n", greeting);
    return 0;
}
```

This code does the following:
1. Initializes a character array `greeting` with the string "Hello".
2. Uses the `strcat` function to append ", world!" to the end of the `greeting`.
3. Prints the contents of the `greeting` after the append operation.
