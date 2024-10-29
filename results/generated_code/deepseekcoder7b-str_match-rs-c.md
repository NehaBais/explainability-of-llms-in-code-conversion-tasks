In C, we can use standard library functions for these tasks - `strncmp()` for starting comparison and `strstr()` for searching a substring, but there is no built-in way to find all occurrences of a substring. You will have to implement your own function for that:

```c
#include <stdio.h>
#include <string.h>

void print_match(char *str, char *sub) {
    char* match = strstr(str, sub);
    
    if (match != NULL){
        printf("Found match at pos %ld\n", match - str);
    } else{
        printf("Did not find any matches\n");
    }
}

int main() {
    char s1[] = "abcd";
    char s2[] = "abab";
    char s3[] = "ab";
    
    // Determining if the first string starts with second string
    if (strncmp(s1, s3, strlen(s3)) == 0){
        printf("Starts with\n");
    } else {
        printf("Does not start with\n");
    }
    
    // Determining if the first string contains the second string at any location
    print_match(s1, s3);  // Found match at pos 0
    print_match(s1, s2);  // Did not find any matches
    
    // Determining if the first string ends with the second string
    size_t len1 = strlen(s1), len2 = strlen(s3);
    if (strncmp(s1 + len1 - len2, s3, len2) == 0){
        printf("Ends with\n");
    } else {
        printf("Does not end with\n");
    }
    
    return 0;
}
```
Please note that C standard library does not provide an out-of-the-box way to find all occurrences of a substring, you would have to implement your own function. For this purpose you might want to use regular expressions or third-party libraries which could be overkill for such simple tasks.

