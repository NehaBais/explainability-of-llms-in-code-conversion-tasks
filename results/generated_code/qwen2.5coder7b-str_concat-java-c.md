Sure, here is the equivalent code in C:

```c
#include <stdio.h>
#include <string.h>

int main() {
    char *s = "hello";
    printf("%s literal\n", s);

    // Concatenate strings using a buffer
    char s2[20];
    strcpy(s2, s);
    strcat(s2, " literal");
    printf("%s\n", s2);

    return 0;
}
```

### Explanation:
1. **String Declaration and Initialization:**
   - `char *s = "hello";` declares a pointer to a character array initialized with the string `"hello"`.

2. **Printing the Original String:**
   - `printf("%s literal\n", s);` prints the value of `s` concatenated with `" literal"`. Note that C doesn't support direct string concatenation in the same way Java does, so we use `strcpy` and `strcat` for this purpose.

3. **Concatenating Strings:**
   - We declare a buffer `char s2[20];` to hold the concatenated result.
   - `strcpy(s2, s);` copies the value of `s` into `s2`.
   - `strcat(s2, " literal");` appends `" literal"` to `s2`.

4. **Printing the Concatenated String:**
   - `printf("%s\n", s2);` prints the concatenated string stored in `s2`.

This C code achieves the same functionality as your Java code but uses standard C library functions for handling strings.
