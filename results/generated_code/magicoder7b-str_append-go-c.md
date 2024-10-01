 Below is the equivalent C code for the given Golang code:

```c
#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    strcpy(s, "foo"); // Appending string literal 'foo' to variable 's'.
    strncat(s, "bar", sizeof(s)-strlen(s)-1); // Appending string literal 'bar' to variable 's'.
    printf("%s", s); // Printing the contents of variable 's'.
    return 0;
}
```

This C code does essentially the same thing as your Go code. It creates a character array (string in C) called `s`, and appends the strings "foo" and "bar" to it using `strcpy` and `strncat`. The strings are then printed out with `printf`.
