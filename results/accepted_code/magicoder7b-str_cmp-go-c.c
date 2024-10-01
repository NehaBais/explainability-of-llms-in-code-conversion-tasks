#include <ctype.h>
#include <string.h>

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
  return strcasecmp(str1, str2) == 0;
}

int isCaseInsensitiveEqual(const char *str1, const char *str2) {
  return _stricmp(str1, str2) == 0;
}