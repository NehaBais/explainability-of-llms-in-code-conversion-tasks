The error occurred because `strstr` returns a `char*` (pointer to char), but it was being compared with an `int` (the loop counter). Also, there is a type mismatch when trying to subtract a `char*` from another `char*` and print the result using `%ld`.

To fix these issues:
1. Cast the pointer difference to `(long)`.
2. Initialize `loc` correctly before entering the loop.
3. Use `strlen` to get the correct length of the string.

Here is the corrected code:

```c
#include <stdio.h>
#include <string.h>

void checkStringMatching() {
  char s1[] = "abcd";
  char s2[] = "abab";
  char s3[] = "ab";

  // Beginning
  if (strncmp(s1, s3, strlen(s3)) == 0) {
    printf("s1 starts with s3\n");
  } else {
    printf("s1 does not start with s3\n");
  }

  // End
  int len_s1 = strlen(s1);
  int len_s3 = strlen(s3);
  if (strncmp(&s1[len_s1 - len_s3], s3, len_s3) == 0) {
    printf("s1 ends with s3\n");
  } else {
    printf("s1 does not end with s3\n");
  }

  // Anywhere
  char *loc = strstr(s2, s3);
  if (loc != NULL) {
    printf("s1 contains s3 starting from location: %ld\n", (long)(loc - s2));
  } else {
    printf("s1 does not contain s3 anywhere\n");
  }

  // Multiple occurrences
  while ((loc = strstr(loc + strlen(s3), s3)) != NULL) {
    printf("s1 contains s3 at location: %ld\n", (long)(loc - s2));
  }
}

int main() {
  checkStringMatching();
  return 0;
}
```
