#include <stdio.h>
#include <string.h>

void printSubstring(const char *str, int n, int m) {
  printf("%.*s\n", m, str + n);
}

int main() {
  char str[] = "abcdefgh";
  int n = 2;
  int m = 3;

  // * starting from n characters in and of m length
  printSubstring(str, n, m);

  // * starting from n characters in, up to the end of the string
  printSubstring(str, n, strlen(str) - n + 1);

  // * whole string minus last character
  printf("%.*s\n", strlen(str) - 1, str);

  // * starting from a known character within the string and of m length
  char ch = 'b';
  int startIdx = strchr(str, ch) - str;
  if (startIdx != NULL)
    printSubstring(str, startIdx, m);

  // * starting from a known substring within the string and of m length
  char substr[] = "bc";
  startIdx = strstr(str, substr) - str;
  if (startIdx != NULL)
    printSubstring(str, startIdx, m);

  return 0;
}