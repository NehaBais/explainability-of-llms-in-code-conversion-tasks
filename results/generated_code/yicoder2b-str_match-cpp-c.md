Sure, here is the equivalent C code for the given problem statement:

```c
#include <string.h>

int main() {
    char s1[] = "abcd";
    char s2[] = "abab";
    char s3[] = "ab";

    // Begins with
    if (strncmp(s1, s3, strlen(s3)) == 0) {
        printf("String starts with %s\n", s3);
    } else {
        printf("String does not start with %s\n", s3);
    }

    // Contains at any location
    if (strchr(s1, s2[0]) != NULL) {
        printf("String contains %s\n", s2);
    } else {
        printf("String does not contain %s\n", s2);
    }

    // Ends with
    if (strcmp(s1 + strlen(s1) - strlen(s3), s3) == 0) {
        printf("String ends with %s\n", s3);
    } else {
        printf("String does not end with %s\n", s3);
    }

    // Locating next occurrence
    char *loc = strstr(&s1[2], &s3[0]);
    if (loc != NULL) {
        printf("Next occurrence of '%s' at location %p\n", s3, loc);
    } else {
        printf("No next occurrence of '%s'\n", s3);
    }

    return 0;
}
```
This program will print the results for all string matching requirements. The `strncmp` function compares the first n characters of two strings. `strchr` searches the string for a specified character or character array and returns a pointer to that location, or NULL if it is not found. `strcmp` compares two strings. `strstr` searches the string(s) for a specified sequence of characters (substring), returning a pointer to that location, or NULL if it is not found.
