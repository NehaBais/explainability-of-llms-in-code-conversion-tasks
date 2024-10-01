Sure, here is how you can convert this code to C. Note that strings in C are not null-terminated arrays like Rust is. Hence, we need additional string handling functions.

```c
#include <stdio.h>
#include <string.h>
#include <assert.h>

void print_match(int match) {
    if (match >= 0) {
        printf("Found match at pos %d\n", match);
    } else {
        printf("Did not find any matches\n");
    }
}

int main() {
    char s1[] = "abcd"; // String in C needs to be null-terminated.
    char s2[] = "abab";
    char s3[] = "ab";
    
    // Check if the string starts with another string
    assert(strncmp(s1, s3, strlen(s3)) == 0); // Comparing the first 'n' bytes of two strings.
    
    // Check if the string contains another string anywhere
    if (strstr(s1, s2) == NULL) {
        printf("Did not find any matches\n");
    } else {
        print_match((int)(strstr(s1, s2) - s1)); // Finding the position.
    }
    
    // Check if the string ends with another string
    assert(strncmp(s2 + strlen(s2) - strlen(s3), s3, strlen(s3)) == 0); // Comparing the last 'n' bytes of two strings.
    
    return 0;
}
```

This C code has the same functionality as your Rust code, but it uses C string functions and assertions. Remember to always null-terminate your C strings if they contain data (use characters that do not represent terminating zeros), or else you might get incorrect results due to invalid memory accesses.
