#include <stdio.h>
#include <string.h>

int main() {
  char s[] = "0123456789";

  int const n = 3;
  int const m = 4;
  char const c = '2';
  char sub[4] = "456";

  printf("%.*s\n", m, s + n); // prints next characters upto m length starting
                              // from character at position n

  return 0;
}