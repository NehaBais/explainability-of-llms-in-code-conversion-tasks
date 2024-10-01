#include <stdio.h>
#include <string.h>

int main() {
  char s[] = "0123456789";

  int n = 3;
  int m = 4;
  char c = '2';
  char sub[5] = "456";

  printf("%.*s\n", m, &s[n]);
  printf("%s\n", s + n);
  printf("%.*s\n", (int)strlen(s) - 1, s);
  printf("%.*s\n", m, strchr(&s[n], c));
  printf("%.*s\n", m, strstr(s, sub));
}