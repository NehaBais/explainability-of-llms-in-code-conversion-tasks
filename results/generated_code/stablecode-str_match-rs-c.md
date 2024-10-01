Here is the equivalent C code:

```c
#include <stdio.h>
#include <string.h>

void print_match(int possible_match) {
    if (possible_match != -1) 
        printf("Found match at pos %d\n", possible_match);
    else
        printf("Did not find any matches\n");
}

int main() 
{
    char s1[6] = "abcd";
    char s2[6] = "abab";
    char s3[4] = "ab";

    // Determining if the first string starts with second string
    if (strncmp(s1, s3, strlen(s3))) {
        printf("First string starts with second string\n");
        print_match(0); // found match at position 0
    }

    // Determining if the first string contains the second string at any location
    if (strstr(s1, s2)) {
        printf("First string contains the second string at any location\n");
        print_match(3);  // Found match at pos 3
    }

    // Determining if the first string ends with the second string
    if (strncmp(s1 + strlen(s1) - strlen(s2), s2, strlen(s2))) {
        printf("First string ends with the second string\n");
        print_match(7);  // Found match at pos 7
    }

    return 0;
}
```
The main differences between Rust and C code are:

1. The use of Option type in Rust is replaced by direct assignment to an integer variable in C.
2. In C, the string functions strncmp(), strstr() etc. are used instead of starts_with(), contains() etc., which are string method specific to Rust language.
3. Also, since the second requirement has multiple occurrences (i.e. finding s1 to start with s2 or end with s2), I have added a separate function print_match() in C code which will print the location of the match as requested by part 2. This is achieved by passing the position where the match occurred from the strstr() function, and then printing this position using printf() function.
