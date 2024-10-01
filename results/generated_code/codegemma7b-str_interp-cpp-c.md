```c
#include <string.h>
#include <stdio.h>

int main() {
    char original[] = "Mary had a X lamb.";
    char toBeReplaced[] = "X";
    char replacement[] = "little";

    int index = strstr(original, toBeReplaced) - original;
    strncat(original, replacement, strlen(replacement));
    original[index + strlen(replacement)] = '\0';

    printf("String after replacement: %s\n", original);

    return 0;
}
```
