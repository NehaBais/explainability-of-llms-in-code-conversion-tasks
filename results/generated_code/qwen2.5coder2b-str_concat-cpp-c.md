In C, the equivalent code would be:

```c
#include <stdio.h>
#include <string.h>

int main() {
    char s[100]; // Create a character array to store string
    strcpy(s, "hello"); // Copy the content of "hello" to 's'
    printf("%s literal\n", s); // Print the concatenated string
    strcat(s, " literal"); // Concatenate "literal" with the original string
    printf("%s\n", s); // Print the final concatenated string

    return 0;
}
```

Please note that in C, we use `strcpy` to copy strings and `strcat` to concatenate strings. The array size needs to be large enough to store the entire string including the null terminator (`\0`).
