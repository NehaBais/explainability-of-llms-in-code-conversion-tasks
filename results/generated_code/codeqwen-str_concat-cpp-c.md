Here is the code in C:

```c
#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "hello";
    printf("%s literal\n", s);

    char s2[strlen(s) + 10]; // Add 10 for the 'literal' string length and null terminator
    strcpy(s2, s);
    strcat(s2, " literal");
    printf("%s\n", s2);

    return 0;
}
```

In C, we use `char[]` arrays to store strings. Unlike in C++ where we have the `std::string` class, which is more flexible, this C code does exactly the same thing as your original C++ code. It first creates a string variable `s` with the value "hello", then prints it concatenated with the string literal. After that, it creates a new string variable `s2` by copying `s`, appending the string literal to `s`, and finally printing `s2`.
