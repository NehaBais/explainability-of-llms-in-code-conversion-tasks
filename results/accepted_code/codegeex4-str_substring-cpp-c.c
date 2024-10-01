#include <stdio.h>
#include <string.h>

char *substring(char *str, int start, int length) {
  static char substr[100];
  strncpy(substr, str + start, length);
  substr[length] = '\0';
  return substr;
}

int main() {
  char s[] = "0123456789";

  int const n = 3;
  int const m = 4;
  char c = '2';
  char sub[] = "456";

  printf("%s\n", substring(s, n, m));
  printf("%s\n", substring(s, n, strlen(s) - n + 1));
  printf("%s\n", substring(s, 0, strlen(s) - 1));

  char *p = strchr(s, c);
  if (p != NULL) {
    printf("%s\n", substring(p, 0, m));
  }

  p = strstr(s, sub);
  if (p != NULL) {
    printf("%s\n", substring(p, 0, m));
  }

  return 0;
}