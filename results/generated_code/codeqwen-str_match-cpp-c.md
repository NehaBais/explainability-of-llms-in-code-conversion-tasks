Here is a C version of the code:

```C
#include <string.h>
#include <stdio.h>

int main() {
    char s1[] = "abcd";
    char s2[] = "abab";
    char s3[] = "ab";

    //Beginning
    if(strncmp(s1, s3, strlen(s3)) == 0) {
        printf("The first string starts with the second string.\n");
    }

    //End
    if(strcmp(s1 + (strlen(s1) - strlen(s3)), s3) == 0) {
        printf("The first string ends with the second string.\n");
    }

    //Anywhere
    char *found = strstr(s1, s2);

    if(found != NULL) {
        int loc = found - s1;
        printf("Found match at location: %d\n", loc);
    } else {
        printf("The first string does not contain the second string.\n");
    }
    return 0;
}
```

In this C code, `strncmp()` is used to compare the first n characters of two strings. If it returns 0 then both strings are equal. The `+ (strlen(s1) - strlen(s3))` part in the "End" if statement is used to access the last n characters of s1, where n is the length of s3.

The `strstr()` function is used for finding a substring in another string. It returns a pointer to the first occurrence of the second string within the first string, or NULL if it's not found. We store this pointer in the `found` variable, and then calculate the location by subtracting the start of s1 from the location of the match.
