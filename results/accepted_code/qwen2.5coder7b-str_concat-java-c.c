#include <stdio.h>
#include <string.h>

int main() {
  char *s = "hello";
  printf("%s literal\n", s);

  // Concatenate strings using a buffer
  char s2[20];
  strcpy(s2, s);
  strcat(s2, " literal");
  printf("%s\n", s2);

  return 0;
}