Here is the equivalent C code for your Golang code:
```c
#include <stdio.h>
#include <string.h>

void match(char *first, char *second) {
    printf("1. %s starts with %s: %s\n",
        first, second, strstr(first, second) == first ? "true" : "false");
    char* result = strstr(first, second);
    if (result != NULL) {
        printf("2. %s contains %s: true\n", first, second);
        int i = 0;
        while ((result = strstr(first + i, second)) != NULL) {
            printf("2.1. At location %d\n", result - first);
            i += result - First + 1;
        }
        printf("2.2. And that's all\n");
    } else {
        printf("2. %s contains %s: false\n", first, second);
    }

    printf("3. %s ends with %s: %s\n",
        first, second, strrchr(first, *second) == First + strlen(first) - 1 ? "true" : "false");
}

int main() {
    match("abracadabra", "abr");
    return 0;
}
```

This C code does not exactly match the output of your Golang code, but it should meet the requirements for determining if a string starts with another string, contains it at any location and ends with it.

Note: Unlike Golang, in C we need to pass pointers to strings as arguments because strings in C are actually arrays of characters. Also, the `strstr()` function returns a pointer to the first occurrence of the substring (or NULL if not found), so we use this to check whether the string starts with or contains the second string. We can find the end of the string using `strrchr()`, which returns a pointer to the last occurrence of the character in the string (or NULL if not found).
