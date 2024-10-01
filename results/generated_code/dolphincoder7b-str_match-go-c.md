Below is the equivalent C code for the given Golang program. Note that it doesn't handle multiple occurrences of a string for part 2 and has a limitation in how to print the location of the match, as Go's printf function does not support the %d verb to print integers. For such a task, one can use sprintf or snprintf functions instead.
```c
#include <stdio.h>
#include <string.h>

void match(const char* first, const char* second) {
    size_t start = 0;
    printf("1. %s starts with %s: ", first, second);
    if (strncmp(first, second, strlen(second)) == 0) {
        printf("true\n");
    } else {
        printf("false\n");
    }
    printf("2. %s contains %s: ", first, second);
    while ((start = strstr(first+start, second))) {
        printf("%d ", start - first);
        if (strlen(second) > strlen(first)) break;
        ++start;
    }
    printf("\n");
    printf("3. %s ends with %s: ", first, second);
    if (strncmp((first + strlen(first) - strlen(second)), second, strlen(second)) == 0) {
        printf("true\n");
    } else {
        printf("false\n");
    }
}

int main() {
    match("abracadabra", "abr");
    return 0;
}
```
