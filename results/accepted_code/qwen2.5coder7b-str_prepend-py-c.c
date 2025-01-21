#include <stdio.h>
#include <stdlib.h>

int main() {
  char s[] = "12345678";
  // Prepend '0' to the string s
  for (int i = 0; i <= strlen(s); i++) {
    s[i + 1] = s[i];
  }
  s[0] = '0';
  printf("%s\n", s);
  return 0;
}