The following is the equivalent code in C:

```C
#include <stdio.h>
#include <string.h>

char* Substring(char* str, int n, int m){
    int len = strlen(str);
    if(n >= len || (n+m) > len) {
        printf("Invalid range\n");
        return NULL;
    }

    char* subStr = malloc((m + 1)*sizeof(char)));
    memcpy(subStr, &str[n], m * sizeof(char)));
    subStr[m] = '\0'; // null terminate the string 

    return subStr;
}
```

This C code is equivalent to the provided Java function. The code takes a string `str`, starting index `n`, and length `m` as input, and returns the corresponding substring in dynamically allocated memory.

It also handles the invalid cases such as if `n` is greater than or equal to the length of the string or if `(n+m)` is greater than the length of the string. In those cases, it prints "Invalid range" to indicate the error and returns NULL.
