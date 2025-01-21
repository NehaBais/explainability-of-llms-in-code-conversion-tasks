The error is due to the fact that `s.find(c)` returns the index of the first occurrence of character 'c' in string 's'. However, when `printf` is used with an address operator (`&`), it expects a pointer, not a range of characters. The actual address of the substring being printed is incorrect.

To fix this error, we need to print each part individually and avoid using the address operator on the result of `find`. Here's the corrected code:

```c
#include <stdio.h>
#include <string.h>

int main() {
  char s[] = "0123456789";
  int n = 3;
  int m = 4;
  char c = '2';
  char sub[6] = "456";

  printf("%s\n", &s[n]); // Print the substring starting from n characters
  printf("%s\n", s);    // Print the whole string minus the last character
  printf("%s\n", &s[s.find(c)]); // Print the substring starting from a known character c
  printf("%s\n", &s[s.find(sub)]); // Print the substring starting from a known substring sub

  return 0;
}
```
