Here is the equivalent C code:

```c
#include <stdio.h>
#include <string.h>

int main() {
    char s[100] = "fo";
    strcat(s, "obar");
    printf("%s\n", s);

    return 0;
}
```

In this code:

- A string variable `s` is created and initialized with the value "foo".
- The `strcat()` function is used to append the string literal "bar" to the end of the `s` variable.
- Finally, the contents of the `s` variable are printed using the `printf()` function.
