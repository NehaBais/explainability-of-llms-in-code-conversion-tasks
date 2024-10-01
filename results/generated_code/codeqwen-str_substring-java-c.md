In C, the equivalent code would be:

```C
#include <stdio.h>
#include <string.h>

char* Substring(const char* str, int n, int m) {
    if (n + m > strlen(str)) {
        m = strlen(str) - n;
    }

    int length = n + m + 1;
    char* result = malloc(length * sizeof(char));
    memcpy(&result[0], &str[n], m);
    result[length-1] = '\0';

    return result;
}

char* SubstringEnd(const char* str, int n) {
    int length = strlen(str);
    if (n > length - 1) {
        n = length - 1;
    }

    int subLength = length - n;
    char* result = malloc((subLength + 1) * sizeof(char));
    memcpy(&result[0], &str[n], subLength);
    result[subLength] = '\0';

    return result;
}

char* SubstringWholeExceptLast(const char* str) {
    int length = strlen(str);
    if (length == 0) {
        return NULL;
    }

    char* result = malloc((length - 1) * sizeof(char));
    memcpy(&result[0], &str[0], length - 1);
    result[length - 2] = '\0';

    return result;
}

char* SubstringStartCharacter(const char* str, int n, int m) {
    int index = 0;
    while (str[index]) {
        if (str[index] == n) {
            break;
        }
        ++index;
    }

    return Substring(&str[index], m);
}

char* SubstringStartSubString(const char* str, const char* sub, int m) {
    int index = 0;
    while (str[index]) {
        if (!memcmp(&str[index], sub, strlen(sub))) {
            break;
        }
        ++index;
    }

    return Substring(&str[index], m);
}
```

Please note that this is a basic version of the code and does not include any error checking or memory management. In real-world applications, you would need to add appropriate checks and clean up your memory to avoid leaks.
