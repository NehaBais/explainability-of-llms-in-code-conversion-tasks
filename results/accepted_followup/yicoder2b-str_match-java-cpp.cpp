#include <cstring> // For using strchr and strncmp
char *strchr(const char *s, int c);
int strncmp(const char *s1, const char *s2, size_t n);
char *my_strchr(const char *s, int c) {
  return strchr(s, c);
} // Wrapping the real C++ function with a Java-like version
void main() {
  // Using the Java-like version for string comparison
  if (strncmp("abc", my_strchr("abcde", 'd'), 1) == 0) { /* Do something */
  } else {                                               /* Handle error */
  }
}