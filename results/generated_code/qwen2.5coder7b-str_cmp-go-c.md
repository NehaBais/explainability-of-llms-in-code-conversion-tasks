Below is the equivalent code in C:

```c
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int compareStringsCaseSensitive(const char *str1, const char *str2) {
    while (*str1 && *str2 && (*str1 == *str2)) {
        str1++;
        str2++;
    }
    return (*str1 - *str2);
}

int compareStringsCaseInsensitive(const char *str1, const char *str2) {
    while (*str1 && *str2 && (tolower((unsigned char)*str1) == tolower((unsigned char)*str2))) {
        str1++;
        str2++;
    }
    return ((unsigned char)*str1 - (unsigned char)*str2);
}

int main() {
    const char *c = "cat";
    const char *d = "dog";

    if (!strcmp(c, d)) {  
        printf("%s is byte-wise identical to %s\n", c, d); 
    }
    
    if (strcmp(c, d) != 0) {
        printf("%s is byte-wise different from %s\n", c, d);
    }

    if (compareStringsCaseSensitive(c, d) > 0) {
        printf("%s is lexically bytewise greater than %s\n", c, d);
    }
    
    if (compareStringsCaseSensitive(c, d) < 0) {
        printf("%s is lexically bytewise less than %s\n", c, d);
    }

    // Case insensitive comparison
    if (!strcasecmp(c, d)) {
        printf("%s is equal to %s in a case-insensitive manner.\n", c, d);
    } else {
        printf("%s is not equal to %s in a case-insensitive manner.\n", c, d);
    }

    return 0;
}
```
This C code uses the `strcmp` function for byte-wise string comparison and also includes a custom function `compareStringsCaseSensitive` for byte-wise character comparison that takes into account ASCII value differences.

For case insensitive comparisons, it uses the `strcasecmp` function from the `<strings.h>` library. If this function is not available (e.g., on systems without GNU libc), an equivalent function can be written using a loop and the `tolower` function from the `<ctype.h>` library to convert characters to lower case before comparison.

Note that in C, string comparison functions return a negative integer if the first argument is smaller than the second one, zero if they are equal, and a positive number otherwise.
