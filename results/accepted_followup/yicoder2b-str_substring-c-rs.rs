#include <stdio.h>
#include <string.h>

void substring(const char* s, int n, ptrdiff_t m) {
    char result[100]; // enough to handle a string of length 100 and a null byte at the end
    int i;
    if (n < strlen(s)) {
        for (i = 0; i < n && s[i] != '\0'; ++i) {}
        strncpy(&result, &s[i], n - i);
    } else {
        printf("String too short\n");
    }

    if (m >= 0 && m < strlen(result)) {
        for (; *&result[m]!='\0'; ++m) {}
        printf("%s\n", result);
    } else if ((m >= -strlen(s) + n || m < 0) && m > -strlen(result)) {
        printf("Error: out of range\n");
    } else {
        printf("Empty string\n");
    }
}