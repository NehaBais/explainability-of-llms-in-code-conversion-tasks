The error in the C code is due to missing terminating quotes in the print statements for the first two matches. In C, string literals require double quotes.

To fix the error, we need to add double quotes around the strings passed to `printf`. 

The corrected code block is:

```c
#include <stdio.h>
#include <string.h>

int contains(const char *str1, const char *str2) {
  size_t len1 = strlen(str1);
  size_t len2 = strlen(str2);

  if (len2 > len1)
    return 0;

  for (size_t i = 0; i <= len1 - len2; i++) {
    if (strncmp(str1 + i, str2, len2) == 0)
      return 1;
  }
  return 0;
}

int startsWith(const char *str1, const char *str2) {
  size_t len1 = strlen(str1);
  size_t len2 = strlen(str2);

  if (len2 > len1)
    return 0;

  for (size_t i = 0; i < len2; i++) {
    if (str1[i] != str2[i])
      return 0;
  }
  return 1;
}

int endsWith(const char *str1, const char *str2) {
  size_t len1 = strlen(str1);
  size_t len2 = strlen(str2);

  if (len2 > len1)
    return 0;

  for (size_t i = len1 - len2; i < len1; i++) {
    if (str1[i] != str2[len2 - 1 - i])
      return 0;
  }
  return 1;
}

void match(const char *str1, const char *str2) {
    printf("1. %s starts with %s: %d
", str1, str2, startsWith(str1, str2));
    printf("2. %s contains %s: %d
", str1, str2, contains(str1, str2));
    if (contains(str1, str2)) {
        int index = 0;
        while ((index = strstr(str1 + index, str2)) != NULL) {
            printf("2.1. at location %d
", index);
        }
    }
    printf("3. %s ends with %s: %d
", str1, str2, endsWith(str1, str2));
}
```
