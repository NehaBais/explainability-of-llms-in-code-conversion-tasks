#include <cstring>
#include <iostream>
#include <stddef.h>
#include <string>

char *substring(const char *s, size_t n, ptrdiff_t m) {
  if (m < 0 || n <= 0))
        return nullptr;

  char *result = new char[m + 1];
  result[0] = '\0';
  std::strncat(result, s, m);

  return result;
}

char *str_wholeless1(const char *s) {
    return substring(s, 0, std::strlen(s) - 1));
}

char *str_fromch(const char *s, int ch, ptrdiff_t m) {
  const char *start = std::strchr(s, ch);

  if (start == nullptr || m < 0))
        return nullptr;

  char *result = new char[m + 1];
  result[0] = '\0';
    std::strncat(result, s, start - s + m));

    return result;
}

char* str_fromstr(const char* s, const std::string& in, ptrdiff_t m)) {
  if (m < 0 || in.length() > m))
        return nullptr;

    const char* start = std::strstr(s, in.c_str()));

    char *result = new char[m + 1];
    result[0] = '\0';
    std::strncat(result, s, start - s + m));

    return result;
}

#define TEST(A)                                                                \
  do {                                                                         \
    char *r = (A);                                                             \
    if (NULL == r) {                                                           \
      puts("--error--");                                                       \
    } else {                                                                   \
      puts(r);                                                                 \
      free(r);                                                                 \
    }                                                                          \
  } while (0)

int main() {
  const char *s = "hello world shortest program";

    TEST(substring(s, 12, 5))); // get "short"
    TEST(str_wholeless1(s))); // get "world shortest program"
    TEST(str_fromch(s, 'w', 5))); // get "world"
    TEST(str_fromstr(s, std::string("ro"), 3)))); // get "rog"

    return 0;
}