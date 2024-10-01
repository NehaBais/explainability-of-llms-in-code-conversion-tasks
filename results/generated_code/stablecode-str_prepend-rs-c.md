Here is the equivalent C code:

```c
#include <stdio.h>
#include <string.h>

int main() {

    char s[100]; // define a string variable

    strcpy(s, "World"); // set string equal to any text value
    strcat(s, "Hello ")); // prepend the string with another string literal
    printf("%s\n", s); // print the resulting string
  
    return 0;
}
```

Note that in C, strings are null-terminated, meaning there is a special character at the end of every string. This is different from Rust where all strings including literals are null-terminated by default.
