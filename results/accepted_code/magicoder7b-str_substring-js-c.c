#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Returns the length of a string in logical characters (code points),
// not 8-bit code units for UTF-8, or 16-bit code units for UTF-16.
int strlen_logical(const char *str) {
  int len = 0;
  const unsigned char *p = (unsigned char *)str;

  while (*p) {
    if ((*p & 0x80) == 0)
      ++len; // ASCII characters are a single byte
    else if ((*p & 0xe0) == 0xc0)
      len += 2; // 110yyyxxxx
    else if ((*p & 0xf0) == 0xe0)
      len += 3; // 1110yyyyyxxxxxx
    else if ((*p & 0xf8) == 0xf0)
      len += 4; // 11110zzzyyyyxxxxxxx
    ++p;
  }

  return len;
}

// Substring method that works with UTF-8 encoding
void substr_utf8(const char *str, int n, int m) {
  const unsigned char *p = (unsigned char *)&str[n];
  int i, count = 0;

  // Calculate the length of the substring from byte position n to the end of
  // the string.
  for (i = 0; *p && (i < m); i++) {
    if ((*p & 0x80) == 0)
      ++count; // ASCII characters are a single byte. Increment count.
    else if ((*p & 0xe0) == 0xc0)
      count += 2; // 110yyyxxxx - Increment count by 2 bytes as this is a
                  // character from the start of a multi-byte sequence.
    else if ((*p & 0xf0) == 0xe0)
      count += 3; // 1110yyyyyxxxxxx - Increment count by 3 bytes as this is a
                  // character from the middle of a multi-byte sequence.
    else if ((*p & 0xf8) == 0xf0)
      count += 4; // 11110zzzyyyyxxxxxxx - Increment count by 4 bytes as this is
                  // a character from the end of a multi-byte sequence.

    ++p;
  }

  // Print substring
  printf("Substring: ");
  for (i = 0; i < count; i++) {
    printf("%c", *p);
    if ((*p & 0xc0) ==
        0x80) // Continue till we get to the start of a new byte sequence.
      ++p;
  }

  printf("\n");
}

// Main function that calls the other functions as necessary
int main() {
  char str[] = "abcdefgh";
  int n, m;

  // Testing each requirement:
  printf("Substring (start from n characters in and of m length): ");
  substr_utf8(str, 2, 3);

  printf(
      "Substring (start from n characters in up to the end of the string): ");
  substr_utf8(str, 2, strlen_logical(str) - 1);

  printf("Substring (whole string minus last character): ");
  substr_utf8(str, 0, strlen_logical(str) - 1);

  printf("Substring (starting from a known character within the string and of "
         "m length): ");
  n = str.indexOf('b'); // Index of 'b' in str
  substr_utf8(str, n, m);

  printf("Substring (starting from a known substring within the string and of "
         "m length): ");
  substr_utf8(str, str.indexOf('bc'), 3);

  return 0;
}