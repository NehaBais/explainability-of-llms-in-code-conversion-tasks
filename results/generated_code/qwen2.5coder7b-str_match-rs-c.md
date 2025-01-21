Here is the equivalent code in C:

```c
#include <stdio.h>
#include <string.h>

void print_match(int possible_match){
    if(possible_match != -1)
        printf("Found match at pos %d\n", possible_match);
    else 
        printf("Did not find any matches\n");
}

int main() {
    char s1[] = "abcd";
    char s2[] = "abab";
    char s3[] = "ab";

    // Determining if the first string starts with second string
    int startswith = strncmp(s1, s3, strlen(s3)) == 0;
    printf("s1 starts with s3: %d\n", startswith);
    
    // Determining if the first string contains the second string at any location
    char *strrchr_result = strstr(s1, s3);
    int contains = strrchr_result != NULL;
    print_match(contains ? (int)(strrchr_result - s1) : -1);

    // Finding all occurrences of a string in the first string
    while(strrchr_result){
        printf("Found match at pos %ld\n", (long)(strrchr_result-s1));
        strrchr_result = strstr(strrchr_result+1, s3);
    }

    // Determining if the first string ends with the second string
    int endswith = strlen(s1) >= strlen(s3) && strncmp(s1 + strlen(s1)-strlen(s3), s3, strlen(s3)) == 0;
    printf("s1 ends with s3: %d\n", endswith);

    return 0;
}
```
In this C version of the code:

1. We use `strncmp` to check if one string starts with another.
2. For checking if a string contains another, we use `strstr`. The location of the match is calculated by subtracting the start address of the first string from the start address of the matched substring (if found).
3. To find all occurrences of a substring within the main string, we call `strstr` repeatedly, starting each time from one character after where it was previously found.
4. We use `strncmp` to check if the last characters in the main string match the target string to check if it ends with it.
