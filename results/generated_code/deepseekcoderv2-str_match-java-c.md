Answer: The following code converts the given Java code to C using a regex function that checks if a string starts or ends with another string and returns true if it does. It also handles multiple occurrences of a substring in a string.

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char str[100];
    int loc = -1;
    bool flag = true;
    printf("Enter a string: ");
    scanf("%s", str);
    if (startsWith(str, "ab")) {
        printf("String starts with ab\n");
    } else {
        printf("String does not start with ab\n");
    }
    if (endsWith(str, "zn")) {
        printf("String ends with zn\n");
    } else {
        printf("String does not end with zn\n");
    }
    while ((loc = contains(str, loc + 1)) != -1) {
        flag = false;
    }
    if (flag) {
        printf("Substring not found in the string.\n");
    } else {
        printf("Substring found at location %d\n", loc);
    }
    return 0;
}
int startsWith(char str[], char pat[]) {
    int len1 = strlen(str), len2 = strlen(pat);
    if (len1 < len2) {
        return false;
    }
    for (int i = 0; i < len2; i++) {
        if (str[i] != pat[i]) {
            return false;
        }
    }
    return true;
}
int endsWith(char str[], char pat[]) {
    int len1 = strlen(str), len2 = strlen(pat);
    if (len1 < len2) {
        return false;
    }
    for (int i = 0, j = len1 - len2; i < len2; i++, j++) {
        if (str[j] != pat[i]) {
            return false;
        }
    }
    return true;
}
int contains(char str[], char sub[]) {
    int len1 = strlen(str), len2 = strlen(sub);
    for (int i = 0, j = -1; i < len1 - len2 + 1; i++) {
        if (strcmp(&str[i], sub) == 0) {
            return i;
        }
    }
    return -1;
}
```