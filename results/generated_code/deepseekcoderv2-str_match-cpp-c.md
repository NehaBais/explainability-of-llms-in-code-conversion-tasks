 To convert the given C++ code to C, we need to use the standard library functions available in C for string manipulation. Here's how you can achieve the same functionality in C:

```c
#include <stdio.h>
#include <string.h>

void check_starts_with(const char *s1, const char *s2) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    if (len1 >= len2 && strncmp(s1, s2, len2) == 0) {
        printf("String '%s' starts with '%s'\n", s1, s2);
    } else {
        printf("String '%s' does not start with '%s'\n", s1, s2);
    }
}

void check_contains(const char *s1, const char *s2) {
    if (strstr(s1, s2) != NULL) {
        printf("String '%s' contains '%s'\n", s1, s2);
    } else {
        printf("String '%s' does not contain '%s'\n", s1, s2);
    }
}

void check_ends_with(const char *s1, const char *s2) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    if (len1 >= len2 && strncmp(s1 + len1 - len2, s2, len2) == 0) {
        printf("String '%s' ends with '%s'\n", s1, s2);
    } else {
        printf("String '%s' does not end with '%s'\n", s1, s2);
    }
}

int main() {
    const char *s1 = "abcd";
    const char *s2 = "ab";
    const char *s3 = "abab";

    check_starts_with(s1, s2);
    check_ends_with(s1, s2);
    check_contains(s1, s3);

    return 0;
}
```

### Explanation:
1. **Check if the first string starts with the second string:**
   - Use `strncmp` to compare the beginning of the strings up to the length of the second string.

2. **Check if the first string contains the second string at any location:**
   - Use `strstr` which returns a pointer to the first occurrence of the substring or NULL if not found.

3. **Check if the first string ends with the second string:**
   - Calculate the length of both strings and use `strncmp` to compare the ending part of the first string with the second string.

### Optional Requirements:
1. **Print the location of the match for part 2:**
   - The C equivalent does not directly provide a way to print the location, but you can modify the function to do so if needed by using additional variables or pointers.

2. **Handle multiple occurrences of a string for part 2:**
   - Since `strstr` returns only the first occurrence, you would need to continue searching from where the previous search ended until it finds no more matches. This can be done manually in a loop if needed.

This C code should provide equivalent functionality to the provided C++ code.
