#include <stdio.h>
#include <string.h>

void displaySubstring(const char *str, size_t n, size_t m) {
  printf("Start %zu, length %zu:   ", n, m);
  for (size_t i = 0; i < m && str[n + i] != '\0'; ++i) {
    putchar(str[n + i]);
  }
  putchar('\n');
}

void displaySubstringToEnd(const char *str, size_t n) {
  printf("Start %zu, to end:      ", n);
  for (size_t i = n; str[i] != '\0'; ++i) {
    putchar(str[i]);
  }
  putchar('\n');
}

void displayAllButLast(const char *str) {
  size_t len = strlen(str);
  printf("All but last:         ");
  for (size_t i = 0; i < len - 1; ++i) {
    putchar(str[i]);
  }
  putchar('\n');
}

int main() {
  const char *s = "ABCDEFGH";
  size_t n, m;

  // For reference
  printf("Index:  01234567\n");
  printf("String: %s\n", s);

  n = 2;
  m = 3;
  displaySubstring(s, n, m);

  n = 2;
  displaySubstringToEnd(s, n);

  displayAllButLast(s);

  // Assuming 'D' is the starting character and 'DE' is the substring
  const char *charStart = "D";
  const char *subStringStart = "DE";

  n = strcspn(s, charStart);
  if (n < strlen(s)) {
    displaySubstring(s, n, m);
  }

  size_t sx = strstr(s, subStringStart) - s;
  if (sx < strlen(s)) {
    displaySubstring(s, sx, m);
  }

  return 0;
}