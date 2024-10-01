#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "hello";
    char str2[] = "world";
    int result;

    // Compare two strings for exact equality
    result = strcmp(str1, str2);
    if (result == 0) {
        printf("Strings are equal.\n");
    } else {
        printf("Strings are not equal.\n");
    }

    // Compare two strings for inequality
    result = strcmp(str1, str2);
    if (result != 0) {
        printf("Strings are not equal.\n");
    } else {
        printf("Strings are equal.\n");
    }

    // Compare two strings to see if one is lexically ordered before the other
    result = strcmp(str1, str2);
    if (result < 0) {
        printf("%s comes before %s in lexicographic order.\n", str1, str2);
    } else {
        printf("%s does not come before %s in lexicographic order.\n", str1, str2);
    }

    // Compare two strings to see if one is lexically ordered after the other
    result = strcmp(str1, str2);
    if (result > 0) {
        printf("%s comes after %s in lexicographic order.\n", str1, str2);
    } else {
        printf("%s does not come after %s in lexicographic order.\n", str1, str2);
    }

    // Compare two strings to see if one is lexically ordered before the other (case-insensitive)
    result = stricmp(str1, str2);
    if (result < 0) {
        printf("%s comes before %s in lexicographic order.\n", str1, str2);
    } else {
        printf("%s does not come before %s in lexicographic order.\n", str1, str2);
    }

    // Compare two strings to see if one is lexically ordered after the other (case-insensitive)
    result = stricmp(str1, str2);
    if (result > 0) {
        printf("%s comes after %s in lexicographic order.\n", str1, str2);
    } else {
        printf("%s does not come after %s in lexicographic order.\n", str1, str2);
    }

    return 0;
}