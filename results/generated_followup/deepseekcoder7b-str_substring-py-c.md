The error message `'libiconv.h' file not found` indicates that the compiler cannot find the library header file libiconv.h. This is probably because it was not installed or the include path for the compiler does not include its location. 

To fix this issue, you should install or locate the libiconv library and add its directory to your compiler's include paths. For example, on Ubuntu/Debian you could use `sudo apt-get install libc-dev` to get it installed, then point the compiler at /usr/include/libiconv.h for the include path.

After installing or locating the library and adding its directory to your compiler's include paths, here is the corrected code:

```C
#include <stdio.h>
#include <string.h>

void print_substr(char* s, int n, int m) {
  if (n > 0 && n <= strlen(s))
    printf("%.*s\n", m, &s[n - 1]);
}

int main() {
  const char* s = "abcdefgh";
  size_t s_size = strlen(s);

  int n = 2;
  int m = 3;
  char ch = 'd';
  const char* chars = "cd";

  print_substr(s, n, m); // starting from n=2 characters in and m=3 length;
  print_substr(s, n, (int)s_size - n + 1); // starting from n characters in, up to the end of the string;

  if (s_size > 0)
    printf("%.*s\n", (int)s_size - 1, s); // whole string minus last character;

  char* found = strchr(s, ch);
  if (found && m <= s_size - (found - s))
    print_substr(found, 1, m); // starting from a known character "d" within the string and of m length;

  found = strstr(s, chars);
  if (found && m <= s_size - (found - s))
    print_substr(found, 1, m); // starting from a known substring "cd" within the string and of m length;

  return (int)s_size;
}
```
This code will work for ASCII strings but may not correctly handle unicode characters. It can be used as an example to show how to access substrings in C, and does not require libiconv or any other external library. If you need to deal with more complex encodings like UTF-8/UTF-16, consider using a dedicated text processing library that is designed for these use cases.

