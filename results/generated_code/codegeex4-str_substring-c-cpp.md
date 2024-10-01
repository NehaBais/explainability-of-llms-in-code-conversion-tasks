The provided C code is already mostly in a format that can be easily ported to C++. However, there are some issues and improvements needed to ensure compatibility with modern C++ standards and to handle Unicode characters properly. Here's the converted code:

```cpp
#include <iostream>
#include <cstring>

std::string substring(const char *s, size_t n, ptrdiff_t m)
{
  /* check for null s */
  if (s == nullptr)
    return "";

  /* negative m to mean 'up to the mth char from right' */
  if (m < 0) 
    m = std::strlen(s) + m - n + 1;

  /* n < 0 or m < 0 is invalid */
  if (n < 0 || m < 0)
    return "";

  /* make sure string does not end before n 
   * and advance the "s" pointer to beginning of substring */
  for (; n > 0 && s[n-1] != '\0'; ++s, --n) {}

  if (n == 0 || *s == '\0')
    return "";

  std::string result = "";
  const char *end = s + m;
  while (*s != '\0' && s < end)
  {
    result += *s++;
  }
  return result;
}

std::string str_wholeless1(const char *s)
{
  return substring(s, 0, std::strlen(s) - 1);
}

std::string str_fromch(const char *s, int ch, ptrdiff_t m)
{
  const char *pos = strchr(s, static_cast<char>(ch));
  if (pos == nullptr)
    return "";
  return substring(pos, 0, m);
}

std::string str_fromstr(const char *s, const char *in, ptrdiff_t m)
{
  const char *pos = strstr(s, in);
  if (pos == nullptr)
    return "";
  return substring(pos, 0, m);
}

#define TEST(A) do { std::string r = (A); if (r.empty()) puts("--error--"); else { std::cout << r << std::endl; } } while(0)

int main()
{
  const char *s = "hello world shortest program";

  TEST(substring(s, 12, 5)); // get "short"
  TEST(substring(s, 6, -1)); // get "world shortest program"
  TEST(str_wholeless1(s));   // "... progra"
  TEST(str_fromch(s, 'w', 5)); // "world"
  TEST(str_fromstr(s, "ro", 3)); // "rog"

  return 0;
}
```

Key Changes and Improvements:
1. **Return Type**: Changed the function return type from `char*` to `std::string`, as it's more idiomatic in C++.
2. **Memory Management**: Removed manual memory allocation (`malloc`) since `std::string` handles its own memory automatically.
3. **Null Termination Check**: Added a check for null termination in the loop when advancing the pointer `s`.
4. **Error Handling**: Changed the return value of `substring` to an empty string rather than returning `NULL`, which is more appropriate for modern C++ code.
5. **Includes and I/O**: Updated includes to use `<iostream>` for output and `<cstring>` for string functions, as `<stdio.h>` is a C header file and isn't necessary in C++.
