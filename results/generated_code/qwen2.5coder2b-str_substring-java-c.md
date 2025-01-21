Sure, here is the equivalent code in C:

```c
#include <stdio.h>
#include <string.h>

char* substring(char* str, int n, int m) {
    if (n >= 0 && n + m <= strlen(str)) {
        return &str[n];
    }
    return NULL;
}

char* substring(char* str, int n) {
    if (n >= 0 && n < strlen(str)) {
        return &str[n];
    }
    return NULL;
}

char* substring(char* str) {
    if (strlen(str) > 1) {
        return &str[strlen(str)-2];
    }
    return NULL;
}

char* substring(char* str, char c, int m) {
    char* pos = strchr(str, c);
    if (pos != NULL && pos + m < strlen(str)) {
        return &pos[0];
    }
    return NULL;
}

char* substring(char* str, const char* sub, int m) {
    char* pos = strstr(str, sub);
    if (pos != NULL && pos + m < strlen(str)) {
        return &pos[0];
    }
    return NULL;
}
```
This code uses the `strchr` function to find the position of a character and `strstr` function to find the position of a substring. The `substring` function returns a pointer to a portion of the string that starts at the specified location and is of the specified length. The positions are calculated based on the UTF-8 or UTF-16 encoding of characters in the string. If the position is not found, the function will return NULL.

Please note that this code is not thread-safe if it is used by multiple threads. If multithreading is needed, you can use mutexes to synchronize access to the string.
