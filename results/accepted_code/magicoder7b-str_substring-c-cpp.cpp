#include <cstdlib>
#include <iostream>
#include <string>

char *substring(const char *s, size_t n, ptrdiff_t m) {
  // check for null s
  if (s == NULL)
    return NULL;

  // negative m to mean 'up to the mth char from right'
  if (m < 0)
    m = strlen(s) + m - n + 1;

  // n < 0 or m < 0 is invalid
  if (n < 0 || m < 0)
    return NULL;

  // make sure string does not end before n
  // and advance the "s" pointer to beginning of substring
  for (; n > 0; s++, n--)
    if (*s == '\0') {
      // string ends before n: invalid
      return NULL;
    }

  char *result = new char[m + 1];
  if (result == NULL)
    // memory allocation failed
    return NULL;

  strncpy(result, s, m);
  result[m] = '\0'; // add null terminator
  return result;
}

char *str_wholeless1(const char *s) { return substring(s, 0, strlen(s) - 1); }

char *str_fromch(const char *s, int ch, ptrdiff_t m) {
  return substring(s, strchr(s, ch) - s, m);
}

char *str_fromstr(const char *s, const char *in, ptrdiff_t m) {
  return substring(s, strstr(s, in) - s, m);
}