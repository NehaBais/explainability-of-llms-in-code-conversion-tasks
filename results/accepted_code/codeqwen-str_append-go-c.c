#include <stdio.h>
#include <string.h>

int main() {
  char s[100] = "foo";
  strcat(s, "bar");
  printf("%s\n", s);
  return 0;
}