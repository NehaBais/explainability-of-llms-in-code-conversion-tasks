 Here's how you can convert the given Rust code to C, adhering to the requirements specified:

1. Determine if the first string starts with the second string.
2. Determine if the first string contains the second string at any location.
3. Determine if the first string ends with the second string.
4. Print the location of the match for part 2, and handle multiple occurrences.

```c
#include <stdio.h>
#include <string.h>

void print_match(int possible_match) {
    if (possible_match != -1) {
        printf("Found match at pos %d\n", possible_match);
    } else {
        printf("Did not find any matches\n");
    }
}

int main() {
    char s1[] = "abcd";
    char s2[] = "abab";
    char s3[] = "ab";
    
    // Determining if the first string starts with the second string
    if (strncmp(s1, s3, strlen(s3)) == 0) {
        printf("The first string starts with the second string\n");
    } else {
        printf("The first string does not start with the second string\n");
    }
    
    // Determining if the first string contains the second string at any location
    char *pos = strstr(s1, s3);
    if (pos != NULL) {
        printf("Found match at pos %ld\n", pos - s1);
    } else {
        printf("Did not find any matches\n");
    }
    
    // Print the location of the match for part 2, and handle multiple occurrences.
    char *pos_multiple = strstr(s1, s3);
    while (pos_multiple != NULL) {
        printf("Found match at pos %ld\n", pos_multiple - s1);
        pos_multiple = strstr(pos_multiple + 1, s3);
    }
    
    // Determining if the first string ends with the second string
    int len1 = strlen(s1);
    int len2 = strlen(s3);
    if (len1 >= len2 && strncmp(&s1[len1 - len2], s3, len2) == 0) {
        printf("The first string ends with the second string\n");
    } else {
        printf("The first string does not end with the second string\n");
    }
    
    return 0;
}
```

This C code performs the same operations as the Rust code:
- It checks if `s1` starts with `s3`.
- It finds the position of `s3` in `s1` and prints it.
- It handles multiple occurrences by continuously searching for `s3` in `s1` starting from where it left off.
- It checks if `s2` ends with `s3`.
