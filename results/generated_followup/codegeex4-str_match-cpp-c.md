The error occurred because `strncmp`, `strlen` and `strstr` were used as if they were variables, instead of functions. The correction is to prefix each with their respective function names.

```c
#include <stdio.h>
#include <string.h>

char *s1 = "abcd";
char *s2 = "abab";
char *s3 = "ab";

// Beginning
if (strncmp(s1, s3, strlen(s3)) == 0) {
  printf("String 1 starts with string 2\n");
} else {
  printf("String 1 does not start with string 2\n");
}

// End
int len_s3 = strlen(s3);
if (strncmp(&s1[strlen(s1)-len_s3], s3, len_s3) == 0) {
  printf("String 1 ends with string 2\n");
} else {
  printf("String 1 does not end with string 2\n");
}

// Anywhere
char *pos = strstr(s1, s2);
if (pos != NULL) {
  printf("Found String 1 containing string 2 at location %d\n", pos - s1);
} else {
  printf("String 1 does not contain string 2\n");
}
```
