Here is your converted C code:

```c
#include <stdio.h>
#include <string.h>

int main() {

    char s[20] = "hello";
    printf("%s literal\n", s);

    strcat(s, " literal");
    printf("%s\n", s);

    return 0;
}
```

In this C code, the `<string>` library has been replaced with standard C string handling functions. The same logic is applied as in your original C++ code.
