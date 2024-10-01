In C, you can achieve similar functionality using the `strncpy` and `strcpy` functions to replace a part of a string. This is a simple example:

```c
#include <stdio.h>
#include <string.h>

int main() {
    char original[] = "Mary had a X lamb";
    const char *little = "little";
    char replaced[100];  // Adjust the size as per your requirements

    strncpy(replaced, original, strlen(original));
    replaced[strlen(original)] = '\0';
    
    // Find the position of 'X' in the string
    char* pos = strchr(replaced, 'X');
    if (pos != NULL) {
        strcpy(pos, little);
    }

    printf("Replaced: %s\n", replaced);

    return 0;
}
```
Please note that this example assumes that `X` appears only once in the original string. If it can appear more than once or not at all, you should add error handling and looping as required to replace all occurrences of `X`.
