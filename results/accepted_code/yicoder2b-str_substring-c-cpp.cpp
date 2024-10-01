#include <ctype.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *substring(const char *s, size_t n, ptrdiff_t m) {
  char *result;
  if (NULL == s)
    return NULL;

  if (m < 0)
    m = strlen(s) + m - n + 1;

  if (n < 0 || m < 0)
    return NULL;

  for (; n > 0; s++, n--) {
    if (' ' == *s)
      return NULL; // string ends before n
  }

  result = new char[m + 1];
  strncpy(result, s, m);
  result[m] = '\0';

  return result;
}

char *str_wholeless1(const char *s) { return substring(s, 0, strlen(s) - 1); }

char *str_fromch(const char *s, int ch, ptrdiff_t m) {
  for (; *s != '\0'; s++) {
    if (*s == ch)
      return substring(s, 0, m);
  }
  return NULL;
}

char *str_fromstr(const char *s, const char *in, ptrdiff_t m) {
  for (; *s != '\0'; s++) {
    if (*s == *in)
      return substring(s, 0, m);
    else if (*(s + strlen(s) - 1) == *(in + strlen(in) - 1))
      return NULL; // end of string reached without match
  }
  return NULL;
}

#define TEST(A)                                                                \
  do {                                                                         \
    char *r = (A);                                                             \
    if (NULL == r)                                                             \
      printf("--error--\n");                                                   \
    else {                                                                     \
      printf("%s\n", r);                                                       \
      delete[] r;                                                              \
    }                                                                          \
  } while (0)

int main() {
  const char *s = "hello world shortest program";

  TEST(substring(s, 12, 5));     // get "short"
  TEST(substring(s, 6, -1));     // get "world shortest program"
  TEST(str_wholeless1(s));       // "... progra"
  TEST(str_fromch(s, 'w', 5));   // "world"
  TEST(str_fromstr(s, "ro", 3)); // "rog"

  return 0;
}