#include <stdio.h>
#include <string.h>

int main() {
  char s[] = "ABCDEFGH";
  int n, m;

  // starting from n characters in and of m length
  n = 2;
  m = 3;
  printf("Start %d, length %d: ", n, m);
  strncpy(s + n, s + n, m);
  printf("%s\n", s + n);

  // starting from n characters in, up to the end of the string
  n = 2;
  printf("Start %d, to end: ", n);
  strncpy(s + n, s + n, -1);
  printf("%s\n", s + n);

  // whole string minus last character
  printf("All but last: ");
  strcpy(s, s + 1);
  printf("%s\n", s);

  // starting from a known character within the string and of m length
  char *dx = "D";
  n = strcspn(s, dx);
  m = 3;
  printf("Start '%c', length %d: ", dx, m);
  strncpy(s + n, s + n, m);
  printf("%s\n", s + n);

  // starting from a known substring within the string and of m length
  char *sx = "DE";
  n = strcspn(s, sx);
  m = 3;
  printf("Start '%s', length %d: ", sx, m);
  strncpy(s + n, s + n, m);
  printf("%s\n", s + n);

  return 0;
}