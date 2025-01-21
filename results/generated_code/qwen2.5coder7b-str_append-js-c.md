Here is the equivalent code in C:

```c
#include <stdio.h>
#include <string.h>

int main() {
    char s1[50] = "Hello"; // Create a string variable equal to any text value.
    
    strcat(s1, ", World!"); // Append another string literal in the most idiomatic way.

    printf("%s\n", s1); // Show the contents of the variable after the append operation.

    return 0;
}
```

This code uses `strcat` function from `string.h` to concatenate two strings. The size of the destination array (`s1`) should be large enough to hold both source strings and the null terminator.
