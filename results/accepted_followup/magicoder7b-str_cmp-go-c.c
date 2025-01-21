#include <ctype.h>
#include <string.h>
#include <strings.h> // for strcasecmp in POSIX systems like Linux or macOS

int isEqual(const char *str1, const char *str2) {
  return strcmp(str1, str2) == 0;
}

int isNotEqual(const char *str1, const char *str2) {
  return strcmp(str1, str2) != 0;
}

int isLessThan(const char *str1, const char *str2) {
  return strcmp(str1, str2) < 0;
}

int isGreaterThan(const char *str1, const char *str2) {
  return strcmp(str1, str2) > 0;
}

int isCaseSensitiveEqual(const char *str1, const char *str2) {
  return strcmp(str1, str2) == 0;
}

int isCaseInsensitiveEqual(const char *str1, const char *str2) {
  return strcasecmp(str1, str2) ==
         0; // or _stricmp in POSIX systems like Linux or macOS
}