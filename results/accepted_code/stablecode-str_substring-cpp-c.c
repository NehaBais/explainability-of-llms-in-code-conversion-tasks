#include <stdio.h>
#include <string.h>

int main() {
  char s[] = "01234567890";

  int const n = 3;
  int const m = 4;
  char const c = '2';
  char const sub[] = "456";

    printf("%.*s\n", m, strstr(s, &c[0]) + n));
    printf("%.*s\n", m, strstr(s, sub) + n);
    printf("%.*s\n", m, s + (strlen(s) - 1)));
    printf("%.*s\n", m, strstr(s, &c[0])) + n);
    printf("%.*s\n", m, strstr(s, sub)) + n;
}