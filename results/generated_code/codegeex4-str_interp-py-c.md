```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void replace(char* original, char* toFind, char* replacement) {
    char buffer[1024];
    char *ch;
    strcpy(buffer, original);
    ch = strstr(buffer, toFind);

    while (ch != NULL) {
        *ch = '\0';
        strcat(buffer, replacement);
        strcat(buffer, toFind + strlen(toFind));
        ch = strstr(buffer, toFind);
    }
}

int main() {
    char original[] = "Mary had a X lamb.";
    char extra[] = "little";
    replace(original, "X", extra);

    printf("%s\n", original);

    return 0;
}
```
This C code uses the `strstr()` function from the string.h library to find occurrences of a substring in the original string. It then replaces the first occurrence with a new string (`replacement`) by using the `strcat()` and `strcpy()` functions from the string.h library. The process continues until there are no more occurrences of the substring in the original string.
