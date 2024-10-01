 Here is a simple implementation of the required functionality in C:

Please note that C does not have built-in string manipulation methods like Python. So, the functions to check if a string starts with another or ends with another are written manually using loops and pointers. The function `contains()` is used for the second requirement which checks if one string contains another at any location. This function takes a pointer to the first character of the main string as an argument and returns a pointer to the start of the found occurrence, or NULL if there is no such occurrence.

```c
#include <stdio.h>
#include <string.h>

char* startswith(const char *s1, const char *s2) {
    size_t len = strlen(s2);
    if (strncmp(s1, s2, len) == 0) {
        return s1;
    } else {
        return NULL;
    }
}

char* endswith(const char *s1, const char *s2) {
    size_t len = strlen(s2);
    if (strcmp(s1 + strlen(s1) - len, s2) == 0) {
        return s1;
    } else {
        return NULL;
    }
}

char* contains(const char *haystack, const char *needle) {
    size_t haystack_len = strlen(haystack);
    size_t needle_len = strlen(needle);
    for (size_t i = 0; i <= haystack_len - needle_len; ++i) {
        if (strncmp(haystack + i, needle, needle_len) == 0) {
            return haystack + i;
        }
    }
    return NULL;
}

int main() {
    const char* s1 = "abcd";
    const char* s2 = "ab";
    const char* s3 = "zn";
    
    if (startswith(s1, s2) != NULL) {
        printf("1. The first string starts with the second.\n");
    } else {
        printf("1. The first string does not start with the second.\n");
    }

    if (endswith(s1, s3) == NULL) {
        printf("2. The first string ends with the third.\n");
    } else {
        printf("2. The first string does not end with the third.\n");
    }

    const char* p = contains(s1, s2);
    if (p != NULL) {
        printf("3. The first string contains the second at position %d.\n", 
               (int)(p - s1));
    } else {
        printf("3. The first string does not contain the second.\n");
    }
    
    return 0;
}
```

Please make sure to adjust this example according to your specific requirements and project constraints such as memory management, error handling etc. For instance, you may want to use dynamic memory allocation for strings if they can be very large. In production code, proper testing should be done.
