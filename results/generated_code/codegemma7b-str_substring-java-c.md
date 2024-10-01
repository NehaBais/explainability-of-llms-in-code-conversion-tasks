```c
#include <string.h>

const char* substr(const char* str, size_t n, size_t m) {
  return str + n;
}

const char* substr(const char* str, size_t n) {
  return str + n;
}

const char* substr(const char* str) {
  return str;
}

const char* substr(const char* str, char c, size_t m) {
  size_t pos = strchr(str, c) - str;
  return str + pos;
}

const char* substr(const char* str, const char* sub, size_t m) {
  size_t pos = strstr(str, sub) - str;
  return str + pos;
}
```
