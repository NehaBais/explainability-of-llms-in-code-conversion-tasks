 C does not have built-in string comparison operators like Golang. Below are the equivalent functions to compare strings:

```c
#include <string.h>
#include <ctype.h>

int isEqual(const char *str1, const char *str2) {
    return strcmp(str1, str2) == 0;
}

int isNotEqual(const char *str1, const char *str2) {
    return strcmp(str1, str2) != 0;
}

int isLessThan(const char *str1, const char *str2) {
    return strcmp(str1, str2) < 0;
}

int isGreaterThan(const char *str1, const char *str2) {
    return strcmp(str1, str2) > 0;
}

int isCaseSensitiveEqual(const char *str1, const char *str2) {
    return strcasecmp(str1, str2) == 0;
}

int isCaseInsensitiveEqual(const char *str1, const char *str2) {
    return _stricmp(str1, str2) == 0;
}
```

Note that the `_stricmp` function is not a standard C library function. It's specific to Microsoft's compiler, and may be replaced by `strcasecmp` when porting code from Windows to Unix-like systems.
