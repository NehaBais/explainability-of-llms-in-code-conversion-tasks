In C, you can't directly concatenate strings like in JavaScript because there isn't a built-in way to do this. However, you can use `strcat` or `sprintf` from the `<string.h>` library to append one string to another. Here's an example of how you might achieve this:

```c
#include <stdio.h>
#include <string.h>

int main() {
    char s[] = ", World";
    strcat(s, "Hello");
    printf("%s\n", s);
    return 0;
}
```

In the code above, `strcat` is used to concatenate the strings "Hello" and ", World". The result is stored back in the `s` array. When you use `printf`, it will print out "Hello, World".

Remember that when using string concatenation in C, you need to ensure that there's enough space for the concatenated string to fit. If `s` were defined as `char s[20]` or a larger size, it would avoid buffer overflow issues.
