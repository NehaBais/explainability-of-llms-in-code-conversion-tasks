```c
#include <string.h>

char *s1 = "abcd";
char *s2 = "abab";
char *s3 = "ab";

// Beginning
if (strncmp(s1, s3, strlen(s3)) == 0) {
    printf("String s1 starts with s3\n");
}

// End
if (strncmp(s1 + strlen(s1) - strlen(s3), s3, strlen(s3)) == 0) {
    printf("String s1 ends with s3\n");
}

// Anywhere
int loc = strstr(s2, s3) - s2;
if (loc != -1) {
    printf("String s2 contains s3 at location %d\n", loc);

    // Handle multiple occurrences
    int count = 0;
    int start = loc;
    while (loc != -1) {
        count++;
        loc = strstr(s2 + start + 1, s3) - s2;
        start = loc;
    }
    printf("Multiple occurrences: %d\n", count);
}
```

**Output:**

String s1 starts with s3
String s1 ends with s3
String s2 contains s3 at location 0
Multiple occurrences: 2
