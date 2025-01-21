 The error occurred because `str` is an array of characters and not a structure or union, which means it does not have member functions such as `indexOf`. In order to use these functions, you would need to convert the string into a data type that supports them. This could be done in JavaScript by using the `String` object, but C doesn't support this.

To fix this error, we need to implement our own function that searches for a character within the string and returns its index. This can be done with nested loops.

Then you can call `substr_utf8(str, str_index(str, 'b'), m);` or `substr_utf8(str, str_index(str, 'bc'), 3);`. You would need to add similar functions for all your requirements.

Here is the complete code:

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int str_index(const char *str, const char c) {
  int len = strlen(str);
  for (int i = 0; i < len; ++i) {
    if (str[i] == c) {
      return i;
    }
  }
  return -1; // return -1 if character is not found.
}

void substr_utf8(const char *str, int n, int m) {
  const unsigned char *p = (unsigned char *)&str[n];
  int i, count = 0;
  
  for (i = 0; *p && (i < m); i++) {
    if ((*p & 0x80) == 0)
      ++count; // ASCII characters are a single byte. Increment count.
    else if ((*p & 0xe0) == 0xc0)
      count += 2; // 110yyyxxxx - Increment count by 2 bytes as this is a character from the start of a multi-byte sequence.
    else if ((*p & 0xf0) == 0xe0)
      count += 3; // 1110yyyyyxxxxxx - Increment count by 3 bytes as this is a character from the middle of a multi-byte sequence.
    else if ((*p & 0xf8) == 0xf0)
      count += 4; // 11110zzzyyyyxxxxxxx - Increment count by 4 bytes as this is a character from the end of a multi-byte sequence.
    
    ++p;
  }
  
  printf("Substring: ");
  for (i = 0; i < count; i++) {
    printf("%c", *p);
    if ((*p & 0xc0) == 0x80) // Continue till we get to the start of a new byte sequence.
      ++p;
  }
  
  printf("\n");
}

int main() {
  char str[] = "abcdefgh";
  int n, m;
  
  printf("Substring (start from n characters in and of m length): ");
  substr_utf8(str, 2, 3);
  
  printf("Substring (start from n characters in up to the end of the string): ");
  substr_utf8(str, 2, strlen_logical(str) - 1);
  
  printf("Substring (whole string minus last character): ");
  substr_utf8(str, 0, strlen_logical(str) - 1);
  
  printf("Substring (starting from a known character within the string and of m length): ");
  n = str_index(str, 'b'); // Index of 'b' in str
  substr_utf8(str, n, m);
  
  printf("Substring (starting from a known substring within the string and of m length): ");
  substr_utf8(str, str_index(str, 'bc'), 3);
  
  return 0;
}
```
