This is a code conversion from C to JavaScript. The requirements of the provided code are as follows:

- Display a substring from n characters in and of m length, starting from the end of the string.
- Display a substring from n characters in, up to the beginning of the string. 
- Display the whole string minus the last character. 
- Display a substring from a known character within the string and of m length. 
- Display a substring from a known substring within the string and of m length.

If the program uses UTF-8 or UTF-16, it must work on any valid Unicode code point, whether in the Basic Multilingual Plane or above it.
The program must reference logical characters (code points), not 8-bit code units for UTF-8 or 16-bit code units for UTF-16.
Programs for other encodings (such as 8-bit ASCII, or EUC-JP) are not required to handle all Unicode characters.

```c
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *substring(const char *s, size_t n, ptrdiff_t m) {
  /* check for null s */
  if (NULL == s) 
    return NULL;
  /* negative m to mean 'up to the mth char from right' */
  if (m < 0) 
    m = strlen(s) + m - n + 1;

  /* n < 0 or m < 0 is invalid */
  if (n < 0 || m < 0)
    return NULL;

  /* make sure string does not end before n 
   * and advance the "s" pointer to beginning of substring */
  for ( ; n > 0; s++, n--)
    if (*s == '\0')
      /* string ends before n: invalid */
      return NULL;

  char *result = malloc(m+1);
  if (NULL == result)
    /* memory allocation failed */
    return NULL;
  strncpy(result, s-n, m); /* strncpy() will automatically add null terminator
                            * if string ends early or after reading m characters */
  return result;
}

char *str_wholeless1(const char *s) {
  /* from 0 to the end of s */
  return substring(s, strlen(s)-1, -1);
}

char *str_fromch(const char *s, int ch, ptrdiff_t m) {
  /* find index of first occurrence of ch and use as n */
  size_t n = (size_t)(strchr(s, ch) - s);
  return substring(s, n, m);
}

char *str_fromstr(const char *s, const char* in, ptrdiff_t m) {
  /* find index of first occurrence of in and use as n */
  size_t n = (size_t)(strstr(s, in) - s);
  return substring(s, n, m);
}

#define TEST(A) do {			char *r = A;			if (NULL == r)			  puts("--error--");			else {				  printf("%s\n", r);				  free(r);					}				  } while(0)

int main() {
  const char *s = "hello world shortest program";
  TEST( substring(s, 12, 5));	// get "short"
  TEST( substring(s, 6, -1));	// get "world shortest program"
  TEST( str_wholeless1(s));		// "... progra"
  TEST( str_fromch(s, 'w', 5));	// "world"
  TEST( str_fromstr(s, "ro", 3));	// "rog"

  return 0;
}
```
