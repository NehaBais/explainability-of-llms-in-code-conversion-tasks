Below is the equivalent C code for the Python script. This should work and print out "012345678" in C.

```c
#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "12345678";
    strcat(s, "0"); // by concatenation
    printf("%s\n", s);
    return 0;
}
```
