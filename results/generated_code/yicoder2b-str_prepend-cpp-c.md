This C++ code can be converted to C as follows:

```c
#include <string.h>
#include <stdio.h>

int main() {
    const char *myString = "prepended to";
    const char *prefix = "my string ";
    char buffer[100];
    strcpy(buffer, prefix);
    strcat(buffer, myString);
    printf("%s\n", buffer);
    return 0;
}
```

This C code performs the same operation as the original C++ code. It concatenates a string literal with another to form a new string, and then prints this new string.
