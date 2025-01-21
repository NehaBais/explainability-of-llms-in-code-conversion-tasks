 Here's how you can convert the given Rust code to C:

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // Create a string variable equal to any text value.
    char s[] = "World";

    // Prepend the string variable with another string literal.
    char prepend[] = "Hello ";
    size_t len = strlen(prepend);
    memmove(s + len, s, strlen(s) + 1);
    memcpy(s, prepend, len);

    // Print the result.
    printf("%s\n", s);

    return 0;
}
```

Explanation:
- We first define a character array `s` initialized with "World".
- Then we have a string literal `prepend` which is "Hello ".
- We use `strlen` to get the length of `prepend`.
- The `memmove` function is used to shift the characters in `s` by the length of `prepend`, making space for it at the beginning.
- Finally, we copy the content of `prepend` into the start of `s` using `memcpy`.
- We print the result using `printf`.
