In C language, there is no direct equivalent for Python's `startswith()` and `endswith()` functions but we can achieve similar results using the string library functions. Also, C does not support finding multiple occurrences of a substring directly, so it needs to be done iteratively. Here is your solution:
```c
#include <stdio.h>
#include <string.h>

int main() {
    char s1[20] = "Hello World";
    char s2[20] = "Hell";

    // Check if the first string starts with second string
    if (strncmp(s1, s2, strlen(s2)) == 0) {
        printf("s1 starts with s2\n");  
    } else {
        printf("s1 does not start with s2\n");  
    }

    // Check if the first string ends with second string
    if (strcmp(s1 + strlen(s1) - strlen(s2), s2) == 0) {
        printf("s1 ends with s2\n");  
    } else {
        printf("s1 does not end with s2\n");  
    }

    // Check if the first string contains second string and print location of occurrence(s)
    char *p = strstr(s1, s2);
    if (p != NULL) {
        printf("s2 found in s1 at position %ld\n", p - s1 + 1);

        // Handle multiple occurrences of a string
        while ((p = strstr(p + 1, s2)) != NULL) {
            printf("s2 found in s1 at position %ld\n", p - s1 + 1);  
        }
    } else {
         printf("s2 not found in s1.\n");   
    }

    return 0;
}
```
This C program checks if string `s1` starts and ends with the string `s2`, then looks for occurrences of `s2` within `s1`, printing their locations when they are found.
