#include <stdio.h>
#include <string.h>

int main() {
  char s[100] = "fo";
  strcat(s, "obar");
  printf("%s\n", s);

  return 0;
}