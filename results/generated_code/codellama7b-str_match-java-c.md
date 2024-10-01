To convert the code from Java to C, you can use the following conversions:

* `String` in Java becomes `char*` in C.
* `startsWith()` method in Java becomes `strncmp()` function in C.
* `endsWith()` method in Java becomes `strrchr()` function in C.
* `contains()` method in Java becomes a for loop that checks if the substring is present in the string.
* `indexOf()` method in Java becomes a for loop that searches for the substring in the string and returns its location.

Here's an example of how you could convert the code from Java to C:
```
#include <string.h>
#include <stdio.h>

int main() {
    char* str1 = "abcd";
    char* str2 = "ab";
    char* str3 = "zn";
    char* str4 = "bb";
    char* str5 = "abab";

    // Determine if the first string starts with second string
    printf("Does '%s' start with '%s': %s\n", str1, str2, (strncmp(str1, str2, strlen(str2)) == 0) ? "yes" : "no");

    // Determine if the first string contains the second string at any location
    printf("Does '%s' contain '%s': %s\n", str1, str4, (strstr(str1, str4) != NULL) ? "yes" : "no");

    // Determine if the first string ends with second string
    printf("Does '%s' end with '%s': %s\n", str1, str3, (strrchr(str1, str3[0]) == NULL) ? "no" : "yes");

    // Find the location of the match for part 2
    char* result = strstr(str5, str4);
    if (result != NULL) {
        printf("Match found at position %d\n", result - str5);
    } else {
        printf("No match found\n");
    }

    return 0;
}
```
Note that the `strncmp()` function in C compares only the first `n` characters of the strings, so you may need to use `strlen()` to get the length of the second string. The `strrchr()` function returns a pointer to the last occurrence of the character in the string, so you may need to add 1 to the result to get the location of the match.
