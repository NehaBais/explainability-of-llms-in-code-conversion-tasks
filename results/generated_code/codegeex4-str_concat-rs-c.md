The equivalent code in C would be:

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *s = (char *)malloc(6); // 5 for 'hello' and 1 for the null terminator
    strcpy(s, "hello");

    printf("%s\n", s);

    char *s1 = (char *)malloc(12); // 11 for ' hello world' and 1 for the null terminator
    sprintf(s1, "%s world", s);

    printf("%s\n", s1);
    
    free(s);
    free(s1);

    return 0;
}
```

This C code creates a character array (`char *`) `s` to hold the string "hello" and copies it using the `strcpy` function. It then prints this string with `printf`.

The code also creates another character array `s1`, concatenates " world" to `s` and stores it in `s1` by using the `sprintf` function. It then prints `s1`.

Finally, it frees up the allocated memory for both strings.

Please note that memory management (allocating/de-allocating) is performed manually in C as compared to Rust's built-in garbage collector.
