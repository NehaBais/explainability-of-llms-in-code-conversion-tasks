The error in the above code is due to not including the <stdio.h> header file which includes printf function prototype declaration but not implementation. 
To fix this, include the <stdio.h> header file at the beginning of your program.

Then when we run your corrected code, it will print "String starts with ab" because s1 and s3 both start with 'ab'. If you want to verify if the string contains 'abab' at any location, you can use `strchr` function which scans the whole string for a specified character or characters.

```c
#include <string.h>

int main() {
    char s1[] = "abcd";
    char s2[] = "abab";
    char s3[] = "ab";

    // Contains at any location
    if (strchr(s1, s2[0]) != NULL) {
        printf("String contains %s\n", s2);
    } else {
        printf("String does not contain %s\n", s2);
    }
    // Locating next occurrence
    char *loc = strstr(&s1[0], &s3[0]);
    if (loc != NULL) {
        printf("Next occurrence of '%s' at location %p\n", s3, loc);
    } else {
        printf("No next occurrence of '%s'\n", s3);
    }

    return 0;
}
```
This code will print "String contains abab" and the next occurrence of 'ab' at location. If there is no next occurrence of 'ab', it will print "No next occurrence of 'ab'\n".
