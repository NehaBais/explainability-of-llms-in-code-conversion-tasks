Here is a C version of your JavaScript code:

```c
#include <stdio.h>
#include <string.h>

int main() {
    char s1[50] = "Hello";
    strcat(s1, ", World!");
    printf("%s\n", s1);
    return 0;
}
```

In this C code, we first define a string variable `s1` and initialize it with the text value "Hello". We then use the `strcat()` function to append another string literal (", World!") to the end of `s1`. Finally, we print out the contents of `s1` using `printf()`.
