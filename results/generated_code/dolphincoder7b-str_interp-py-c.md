The equivalent C code for the given Python code would be:
```c
#include <stdio.h>
int main() {
    char extra[] = "little";
    char new_str[] = "Mary had a %s lamb.";
    sprintf(new_str, "Mary had a %s lamb.", extra);
    printf("%s\n", new_str);
    return 0;
}
```
