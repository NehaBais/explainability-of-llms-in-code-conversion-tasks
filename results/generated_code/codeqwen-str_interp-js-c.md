The equivalent C code for the JavaScript code you provided would be as follows:

```c
#include <stdio.h>
#include <string.h>

int main() {
    char original[] = "Mary had a X lamb";
    char little[] = "little";
    char replaced[100]; // assuming maximum string length of 99 characters plus null terminator

    strcpy(replaced, original); // copy the original string to the replaced variable
    strcat(replaced, little + 1); // concatenate the second part of little (after the first character) to the end of replaced

    printf("%s\n", replaced);

    return 0;
}
```

This code creates a new string "replaced" by copying the original string and then appending the rest of the "little" string to it. If the "little" string was longer than just the letter "X", this will replace the first instance of X in the original string with all of "little".

Note that C doesn't have a built-in function like JavaScript's `String.prototype.replace()`. Instead, we use the `strcpy()` and `strcat()` functions from the standard library to copy and concatenate strings. The `+ 1` in `strcat(replaced, little + 1)` is used because we want to skip the first character of "little" when appending it to "replaced".
