
The errors occur because `s` is a pointer to a string of characters, and it does not have any member functions like `find()` or `substr()`. You can use the `strstr()` function from `<string.h>` to find a substring within another string, but you would need to pass in a null-terminated string as the second argument.

Here is the corrected code:
```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char *s = "0123456789";

  int n = 3;
  int m = 4;
  char c = '2';
  char *sub = "456";

  printf("%.*s\n", m, &s[n]); // starting from n characters in and of m length
  printf("%s\n", &s[n]); // starting from n characters in, up to the end of the string
  printf("%.*s\n", s.size() - 1, &s[0]); // whole string minus the last character
  printf("%s\n", strstr(s, c)); // starting from a known character within the string and of m length
  printf("%s\n", strstr(s, sub)); // starting from a known substring within the string and of m length
}
```
