```c
#include <stdio.h>
#include <string.h>

// Determining if the first string starts with the second string
int check_starts_with(const char *s1, const char *s2) {
    return strncasecmp(s1, s2, strlen(s2)) == 0;
}

// Determining if the first string contains the second string at any location
int check_contains(const char *s1, const char *s2) {
    return strstr(s1, s2) != NULL;
}

void print_match(const char *s1, const char *s2, int match_pos) {
    if (match_pos == -1) {
        printf("Did not find any matches\n");
    } else {
        printf("Found match at pos %d\n", match_pos);
    }
}

int main() {
    const char *s1 = "abcd";
    const char *s2 = "abab";
    const char *s3 = "ab";

    // Determining if the first string starts with second string
    if (check_starts_with(s1, s3)) {
        printf("First string starts with second string: %d\n", check_starts_with(s1, s3));
    } else {
        printf("First string does not start with second string: %d\n", check_starts_with(s1, s3));
    }

    // Determining if the first string contains the second string at any location
    if (check_contains(s1, s2)) {
        printf("First string contains second string: %d\n", check_contains(s1, s2));
    } else {
        printf("First string does not contain second string: %d\n", check_contains(s1, s2));
    }

    // Print the location of the match 
    int match_pos = strcspn(s1, s3);
    print_match(s1, s2, match_pos); // Found match at pos 0

    return 0;
}
```
In this C code, `strncasecmp()` is used to compare substrings, `strstr()` is used to find the location of a substring in the string, and `strcspn()` is used to determine if a character appears in a string. The function `check_starts_with` determines whether the first string starts with the second string, and the function `print_match` prints the location of the match for part 2.
