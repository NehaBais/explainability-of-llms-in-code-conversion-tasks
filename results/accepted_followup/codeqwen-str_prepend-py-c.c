#include <stdio.h>
#include <string.h>

int main() {
  char s[] = "12345678";
  char new_s[10];                           // Enough space for "0" + s
  snprintf(new_s, sizeof(new_s), "0%s", s); // by concatenation
  strcpy(s, new_s);
  printf("%s\n", s);
  return 0;
}