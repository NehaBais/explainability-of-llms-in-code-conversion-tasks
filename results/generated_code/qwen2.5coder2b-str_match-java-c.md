Sure, below is the equivalent code in C for the given problem. It includes handling multiple occurrences of a string.

```c
#include <stdio.h>
#include <string.h>

int startsWith(const char *str1, const char *str2) {
    int i;
    for (i = 0; str2[i] != '\0'; i++) {
        if (str1[i] != str2[i]) {
            return 0; // Not a match
        }
    }
    return 1; // Matches
}

int endsWith(const char *str1, const char *str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    for (int i = 0; i < len2; i++) {
        if (str1[len1 - len2 + i] != str2[i]) {
            return 0; // Not a match
        }
    }
    return 1; // Matches
}

int contains(const char *str1, const char *str2) {
    int pos = 0;
    while ((pos = strstr(str1 + pos, str2)) != NULL) {
        return 1;
    }
    return 0;
}

void printMatchLocation(const char *str1, const char *str2) {
    int loc = strstr(str1, str2);
    if (loc != NULL) {
        printf("The first string starts with the second string at index %d\n", loc - str1);
    } else {
        printf("The first string does not start with the second string\n");
    }
}

int main() {
    const char *str1 = "abcd";
    const char *str2 = "ab";

    if (startsWith(str1, str2)) {
        printf("The first string starts with the second string\n");
    } else {
        printf("The first string does not start with the second string\n");
    }

    if (endsWith(str1, str2)) {
        printf("The first string ends with the second string\n");
    } else {
        printf("The first string does not end with the second string\n");
    }

    if (contains(str1, str2)) {
        printf("The first string contains the second string at index ");
        printMatchLocation(str1, str2);
    } else {
        printf("The first string does not contain the second string\n");
    }

    // Check for multiple occurrences
    int loc = strstr(str1, "ab");
    while (loc != NULL) {
        printf("Found occurrence of 'ab' at index %d\n", loc - str1);
        loc = strstr(loc + 1, "ab");
    }

    return 0;
}
```

### Explanation:
1. **startsWith**: This function checks if `str1` starts with `str2`.
2. **endsWith**: This function checks if `str1` ends with `str2`.
3. **contains**: This function checks if `str1` contains `str2`.
4. **printMatchLocation**: This function prints the location of the match for part 2.
5. **main**: This is the main function that demonstrates all the functionalities and handles multiple occurrences of a string.

This C code performs the required operations on the strings as specified in the problem.
