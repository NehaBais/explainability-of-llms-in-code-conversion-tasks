The equivalent C code would be:

```c
#include <stdio.h>
#include <string.h>

int main() {
    char s[20] = "world!";
    strcpy(s, "Hello, ");
    printf("%s", s);
    return 0;
}
```
