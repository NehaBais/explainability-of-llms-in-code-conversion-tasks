#include <stdio.h>
#include <string.h>

int main() {
  char s[] = "ABCDEFGH";
  int n = 2, m = 3;

  printf("Index:     01234567\n");
  printf("String:    %s\n", s);
  // starting from n characters in and of m length
  printf("Start %d, length %d:   %.*s\n", n, m, m, &s[n]);
  // starting from n characters in, up to the end of the string
  printf("Start %d, to end:     %s\n", n, &s[n]);
  // whole string minus last character
  s[strlen(s) - 1] = '\0';
  printf("All but last:        %s\n", s);
  // starting from a known character within the string and of m length
  char *dx = strchr(s, 'D');
  printf("Start 'D', length %d:  %.*s\n", m, m, dx);
  // starting from a known substring within the string and of m length
  char *sx = strstr(s, "DE");
  printf("Start \"DE\", length %d:%.*s\n", m, m, sx);

  return 0;
}