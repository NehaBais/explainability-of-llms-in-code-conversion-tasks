#include <stdio.h>
#include <string.h>

void print_substr(const char *s, int n, int m) {
  for (int i = n; i < n + m && s[i] != '\0'; ++i) {
    printf("%c", s[i]);
  }
  printf("\n");
}

// Find the position of a character in the string and then print m characters
// starting from that position.
void find_and_print(const char *s, int n, int m, char c) {
  const char *p = strchr(s + n, c);
  if (p != NULL)
    print_substr((char *)p, 0, m);
}

// Find the position of a substring in the string and then print m characters
// starting from that position.
void find_substr_and_print(const char *s, int n, int m, const char *substr) {
  const char *p = strstr(s + n, substr);
  if (p != NULL)
    print_substr((char *)p, 0, m);
}

int main() {
  const char *s = "abc文字化けdef";
  int n = 2;
  int m = 3;

  // Print 3 characters starting at index 2  (c文字)
  print_substr(s + n, 0, m);

  printf("\n");

  // Print all characters starting at index 2  (c文字化けdef)
  printf("%s\n", s + n);

  // Print all characters except the last  (abc文字化けde)
  for (int i = 0; s[i + 1] != '\0'; ++i) {
    printf("%c", s[i]);
  }

  printf("\n");

  // Print 3 characters starting with 'b' (bc文)
  find_and_print(s, n, m, 'b');

  // Print 3 characters starting with "けd" (けde)
  find_substr_and_print(s, n, m, "けd");

  return 0;
}