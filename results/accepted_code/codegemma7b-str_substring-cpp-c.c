#include <stdio.h>
#include <string.h>

int main() {
  char s[] = "0123456789";

  int const n = 3;
  int const m = 4;
  char const c = '2';
  char const sub[] = "456";

  printf("%.*s\n", m, s + n);
  printf("%.*s\n", strlen(s) - n, s + n);
  printf("%.*s\n", strlen(s) - 1, s);
  printf("%.*s\n", m, s + sscanf(s, "%*[^%c]%c", NULL, c));
  printf("%.*s\n", m, s + strstr(s, sub) - s);
}