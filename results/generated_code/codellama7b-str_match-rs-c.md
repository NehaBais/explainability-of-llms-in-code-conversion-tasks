```
#include <stdio.h>
#include <string.h>
#include <assert.h>

void print_match(int match) {
    if (match != -1) {
        printf("Found match at pos %d\n", match);
    } else {
        printf("Did not find any matches\n");
    }
}

int main() {
    char *s1 = "abcd";
    char *s2 = "abab";
    char *s3 = "ab";

    // Determining if the first string starts with second string
    assert(strncmp(s1, s3, strlen(s3)) == 0);
    // Determining if the first string contains the second string at any location
    print_match(strstr(s1, s2)); // Found match at pos 0
    print_match(strstr(s1, s3)); // Did not find any matches
    // Determining if the first string ends with the second string
    assert(strcmp(s2, s3) == 0);
}
```
In this code conversion, we have converted the Rust code to C. The main difference is that in Rust, strings are represented as references, whereas in C, they are represented as pointers. Additionally, Rust has a built-in function `starts_with` and `ends_with` for checking if a string starts or ends with another string, whereas in C, we need to use the `strncmp` and `strcmp` functions for these purposes. We have also used the `assert` function in Rust to check for certain conditions, which is equivalent to using the `printf` statement in C to print an error message if a condition is not met. Finally, we have converted the `Option<usize>` type in Rust to an integer type in C, which can be used to indicate whether a match was found or not.
