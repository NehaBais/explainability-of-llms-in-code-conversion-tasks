#include <stdio.h>
#include <string.h>

int main() {
  char s[] = "0123456789";

  int const n = 3;
  int const m = 4;
  char const c = '2';
  char const *sub = "456";

  printf("%.*s\n", m, s + n);
  printf("%s\n", s + n);
  printf("%.*s\n", (int)strlen(s) - 1, s);

  char *p = strchr(s, c);
  if (p != NULL)
    printf("%.*s\n", m, p);

  char *q = strstr(s, sub);
  if (q != NULL)
    printf("%.*s\n", m, q);
}