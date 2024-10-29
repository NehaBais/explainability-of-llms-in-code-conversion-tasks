The C language does not have built-in support for strings or string functions like in the C++ standard library but you can still perform some of these operations using its more basic features. Here is how you might translate your code into C:

C Code:

```c
#include <stdio.h>
#include <string.h>

int main() {
    char s1[] = "abcd";
    char s2[] = "abab";
    char s3[] = "ab";
    
    // Beginning
    if (strncmp(s1, s3, strlen(s3)) == 0) 
        printf("First string starts with second\n");
        
    // Ending
    size_t len1 = strlen(s1);
    size_t len2 = strlen(s3);
    
    if (strncmp(s1 + len1 - len2, s3, len2) == 0) 
        printf("First string ends with second\n");
        
    // Anywhere
    if (strstr(s1, s2)) 
        printf("First string contains the second anywhere\n");
    
    // Print location of match for part 2
    char *loc = strstr(s2, s3);
    if (loc)
        printf("Second string is found at position: %ld\n", loc - s2 + 1);
        
    return 0;
}
```
This program will print whether the first string starts with or ends with the second and checks if the second one appears anywhere in the first. If so, it prints out its location (+1 because C arrays are zero-indexed). In all cases comparison is case sensitive. To make it case insensitive you need to convert both strings to lowercase before comparing.

