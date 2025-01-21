#include <stdio.h>
#include <string.h>

void displaySubstring(const char *s, int n, int m) {
  if (n + m <= strlen(s)) {
    printf("%.*s\n", m, &s[n]);
  }
}

int main() {
  const char *s = "0123456789";
  int const n = 3;
  int const m = 4;
  char const c = '2';
  const char *sub = "456";

  displaySubstring(s, n, m);
  displaySubstring(s, n, strlen(s));
  printf("%.*s\n", strlen(s) - 1, s);

  // Find the position of the character
  int posC = strcspn(s, &c);
  if (posC != strlen(s)) {
    displaySubstring(s, posC, m);
  }

  // Find the position of the substring
  const char *posSub = strstr(s, sub);
  if (posSub) {
    displaySubstring(posSub, 0, m);
  }

  return 0;
}