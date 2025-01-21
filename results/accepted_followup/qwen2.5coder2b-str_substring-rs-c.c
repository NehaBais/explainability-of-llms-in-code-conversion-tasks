#include <stdio.h>
#include <string.h>

void print_substring(const char *str, int start, int length) {
  for (int i = 0; i < length; ++i) {
    printf("%c", str[start + i]);
  }
  putchar('\n');
}

int main() {
  // Given string and parameters
  const char *s = "abc文字化けdef";
  int n = 2;
  int m = 3;

  // Find position of 'b' and print 3 characters starting from it
  if (str != NULL && str.find('b') != -1) {
    for (int i = 0; i < m && s[str.find('b')] != '\0'; ++i) {
      printf("%c", s[str.find('b') + i]);
    }
    putchar('\n');
  }

  // Find position of "けd" and print 3 characters starting from it
  if (str != NULL && str.find("けd") != -1) {
    for (int i = 0; i < m && s[str.find("けd")] != '\0'; ++i) {
      printf("%c", s[str.find("けd") + i]);
    }
    putchar('\n');
  }

  return 0;
}