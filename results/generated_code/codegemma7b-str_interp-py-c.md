```c
#include <stdio.h>
#include <string.h>

int main() {
    char extra[] = "little";
    char new_str[50];

    sprintf(new_str, "Mary had a %s lamb.", extra);

    printf("%s\n", new_str);

    return 0;
}
```
