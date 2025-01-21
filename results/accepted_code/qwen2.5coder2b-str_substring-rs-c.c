#include <stdio.h>
#include <string.h>

// Function to print a substring
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

  // Print 3 characters starting at index 2 (c文字)
  print_substring(s, n, m);

  // Print all characters starting at index 2 (c文字化けdef)
  for (int i = n; s[i] != '\0'; ++i) {
    printf("%c", s[i]);
  }
  putchar('\n');

  // Print all characters except the last (abc文字化けde)
  for (int i = 1; s[i] != '\0'; ++i) {
    printf("%c", s[i]);
  }
  putchar('\n');

  // Find position of 'b' and print 3 characters starting from it
  int bpos = str.find('b');
  if (bpos != -1) {
    for (int i = 0; i < m && s[bpos + i] != '\0'; ++i) {
      printf("%c", s[bpos + i]);
    }
    putchar('\n');
  }

  // Find position of "けd" and print 3 characters starting from it
  int spos = str.find("けd");
  if (spos != -1) {
    for (int i = 0; i < m && s[spos + i] != '\0'; ++i) {
      printf("%c", s[spos + i]);
    }
    putchar('\n');
  }

  return 0;
}