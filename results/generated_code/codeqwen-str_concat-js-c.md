Here's how you can convert the given JavaScript code to C:

```c
#include <stdio.h>

int main() {
    char s[] = "hello";
    printf("%s there!\n", strcat(s, " there!"));
    return 0;
}
```

In this C program, we have defined a character array `s` with the value "hello". The `strcat()` function is used to concatenate the string literal " there!" to the end of `s`. Finally, the content of `s` along with the new string is printed using `printf()`.
