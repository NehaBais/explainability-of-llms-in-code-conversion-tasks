The error arises because of the conflicting function definitions for 'Substring' method in C. In Java, methods are polymorphic i.e it allows multiple methods having same name but different parameters (method overloading). But in C, this kind of behavior is not allowed and causes conflicts as seen above. The solution to this error would be to create separate functions for each scenario: one taking two arguments, another one taking a single argument, yet others taking three or four arguments. Here's the corrected code:

```c
#include <stdlib.h>
#include <string.h>

char *Substring_nm(const char *str, int n, int m) {
  if (n + m > strlen(str))
    return NULL;
  char *result = malloc(sizeof(char) * (m + 1));
  strncpy(result, str + n, m);
  *(result + m) = '\0';
  return result;
}

char *Substring_n(const char *str, int n) {
  if (n > strlen(str))
    return NULL;
  int len = strlen(str) - n;
  char *result = malloc(sizeof(char) * (len + 1));
  strcpy(result, str + n);
  return result;
}

char *Substring_none(const char *str) {
  if (strlen(str) == 0)
    return NULL;
  int len = strlen(str) - 1;
  char *result = malloc(sizeof(char) * (len + 1));
  strncpy(result, str, len);
  *(result + len) = '\0';
  return result;
}

char *Substring_cnm(const char *str, const char c, int n, int m) {
   int pos = (int)strchr(str, c) - str;
   if ((pos != -1) && (pos + m > strlen(str)))
    return NULL;
  char *result = malloc(sizeof(char) * (m + 1));
  strncpy(result, str + pos, m);
  *(result + m) = '\0';
  return result;
}

char *Substring_subnm(const char *str, const char *sub, int n, int m) {
   int pos = (int)strstr(str, sub) - str;
   if ((pos != -1) && (pos + m > strlen(str)))
    return NULL;
  char *result = malloc(sizeof(char) * (m + 1));
  strncpy(result, str + pos, m);
  *(result + m) = '\0';
  return result;
}
```
