The equivalent C code would be:

```c
#include <stdio.h>
#include <string.h>

void print_match(int match_pos) {
    if (match_pos != -1) {
        printf("Found match at pos %d\n", match_pos);
    } else {
        printf("Did not find any matches\n");
    }
}

int main() {
    char s1[] = "abcd";
    char s2[] = "abab";
    char s3[] = "ab";
    
    // Determining if the first string starts with second string
    if(strncmp(s1, s3, strlen(s3)) == 0) {
        printf("First string starts with second string.\n");
    } else {
        printf("The first string does not start with the second string.\n");
    }
    // Determining if the first string contains the second string at any location
    if(strstr(s1, s3) != NULL) {
        printf("First string contains the second string.\n");
        print_match(strstr(s1, s3) - s1); // Print the location of the match 
    } else {
        printf("The first string does not contain the second string.\n");
    }
    // Determining if the first string ends with the second string
    if(strncmp(s1 + strlen(s1) - strlen(s3), s3, strlen(s3)) == 0) {
        printf("First string ends with the second string.\n");
    } else {
        printf("The first string does not end with the second string.\n");
    }
    return 0;
}
```

Please note that C's `strncmp` function compares only the first 'len1' bytes of str2, which are up to the length of str1. So this version will handle multiple occurrences of a string for part 2 by using the position of the found substring directly. If you need something more complex like iterating over all matches, you would probably need to implement your own function.
