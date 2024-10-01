 Below is the equivalent C code for the given Golang program.

```c
#include <stdio.h>
#include <string.h>

void match(char *first, char *second) {
    printf("1. %s starts with %s: %d\n", first, second, strncmp(first, second, strlen(second)) == 0);
    size_t len = strlen(first);
    size_t pos = 0;
    while((pos = strstr(first+pos, second)) != NULL) {
        printf("2. %s contains %s: %d at location %ld\n", first, second, 1, (long)pos-first);
        ++pos;
    }
    printf("3. %s ends with %s: %d\n", first, second, strcmp(second, first+len-strlen(second)) == 0);
}

int main() {
    match("abracadabra", "abr");
    return 0;
}
```
This code does the same matching operations as your Golang version. Note that C doesn't have a built-in string contains function like Go, so we loop through the string to find occurrences of the substring. In this example, it will print the index of the first occurrence and then keep searching for additional instances.
