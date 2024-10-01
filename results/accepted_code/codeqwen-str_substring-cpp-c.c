#include <stdio.h>
#include <string.h>

int main() {
  char s[] = "0123456789";

  int const n = 3;
  int const m = 4;
  char const c = '2';
  char const sub[] = "456";

  printf("%s\n", strlen(s) > n ? &s[n] : "");
  printf("%s\n", s);
  printf("%s\n", *s != '\0' ? s : "");
  printf("%.*s\n", m, (char *)strchr(s, c));
  printf("%.*s\n", m, (char *)strstr(s, sub));

  return 0;
}