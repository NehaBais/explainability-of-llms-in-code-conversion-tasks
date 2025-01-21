 Here's the equivalent C code for the given Python code:

```c
#include <stdio.h>
#include <string.h>

int main() {
    // Test startsWith
    char str1[] = "abcd";
    char str2[] = "ab";
    if (strncmp(str1, str2, strlen(str2)) == 0) {
        printf("startsWith: True\n");
    } else {
        printf("startsWith: False\n");
    }

    // Test endswith
    char str3[] = "bb";
    char str4[] = "abab";
    int len1 = strlen(str3);
    int len2 = strlen(str4);
    if (len2 >= len1 && strncmp(&str4[len2 - len1], str3, len1) == 0) {
        printf("endswith: True\n");
    } else {
        printf("endswith: False\n");
    }

    // Test contains (contains at any location)
    char str5[] = "abab";
    if (strstr(str5, "bb") != NULL) {
        printf("contains: True\n");
    } else {
        printf("contains: False\n");
    }

    // Test contains multiple occurrences
    char str6[] = "abab";
    char *pos = strstr(str6, "ab");
    int count = 0;
    while (pos != NULL) {
        count++;
        pos = strstr(pos + 1, "ab");
    }
    if (count > 0) {
        printf("contains multiple: True\n");
    } else {
        printf("contains multiple: False\n");
    }

    // Test find and find multiple occurrences
    char str7[] = "abab";
    char *pos1 = strstr(str7, "bb");
    if (pos1 != NULL) {
        printf("find: %ld\n", pos1 - str7);
    } else {
        printf("find: Not found\n");
    }

    char str8[] = "abab";
    char *pos2 = strstr(str8, "ab");
    if (pos2 != NULL) {
        printf("find: %ld\n", pos2 - str8);
    } else {
        printf("find: Not found\n");
    }

    char str9[] = "abab";
    char *pos3 = strstr(str9, "ab");
    if (pos3 != NULL) {
        pos3 = strstr(pos3 + 1, "ab");
        if (pos3 != NULL) {
            printf("find multiple: %ld\n", pos3 - str9);
        } else {
            printf("find multiple: Not found\n");
        }
    } else {
        printf("find multiple: Not found\n");
    }

    return 0;
}
```

This C code performs the same operations as your Python example, including string matching and handling for multiple occurrences. The `strncmp` function is used to check if one string starts with another, `strstr` is used to find a substring within a string, and arithmetic operations are used to handle positions of matches.
