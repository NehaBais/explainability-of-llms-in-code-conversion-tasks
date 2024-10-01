```c
#include <stdio.h>
#include <string.h>

int main() {
    char *hello = strdup("Hello world");
    printf("%s\n", strcat(hello, "!!!!"));

    return 0;
}
```
