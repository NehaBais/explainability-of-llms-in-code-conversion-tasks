 Sure! Here is the equivalent code in C that performs string interpolation similar to Python's f-string functionality:

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char extra[] = "little";
    char new_str[100]; // Assuming the final string won't exceed 100 characters

    // Using sprintf to interpolate the variable into the string
    sprintf(new_str, "Mary had a %s lamb.", extra);

    printf("%s\n", new_str);

    return 0;
}
```

In this C code:
- We define a character array `extra` with the value "little".
- We create a character array `new_str` to hold the interpolated string, assuming it won't exceed 100 characters.
- We use `sprintf` to insert the value of `extra` into the format string "Mary had a %s lamb.". The `%s` is a placeholder for a string, and `sprintf` replaces this placeholder with the content of `extra`.
- Finally, we print the interpolated string using `printf`.
