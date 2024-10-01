The equivalent code in C would be:

```c
#include <stdio.h>
#include <string.h>

void print_match(int match_pos){
    if (match_pos >= 0)
        printf("Found match at pos %d\n", match_pos);
    else 
        printf("Did not find any matches\n");
}

int main() {
    char s1[] = "abcd";
    char s2[] = "abab";
    char s3[] = "ab";

    // Determining if the first string starts with second string
    if(strncmp(s1, s2, strlen(s3)) == 0)
        printf("s1 starts with s3\n");
    else 
        printf("s1 does not start with s3\n");

    // Determining if the first string contains the second string at any location
    char *pos = strstr(s1, s3);
    print_match((int)(pos - s1)); 

    // Determining if the first string ends with the second string
    size_t s1_len = strlen(s1), s2_len = strlen(s3);
    if(s1_len >= s2_len && strncmp(s1 + s1_len - s2_len, s3, s2_len) == 0)
        printf("s1 ends with s3\n");
    else 
        printf("s1 does not end with s3\n");

    return 0;
}
```
This program will demonstrate the same three types of string matching as in Rust code. It also prints out the position of the match for the second type of string matching, and it handles multiple occurrences of a string by using strstr() function which returns a pointer to the first occurrence of s3 in s1 or NULL if s3 is not present. The difference between positions can be calculated by subtracting the starting address of s1 from that of pos.
Note: C strings are null-terminated so it's necessary to handle them accordingly.
