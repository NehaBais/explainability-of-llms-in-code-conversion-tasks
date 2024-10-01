#include <stdio.h>

int main() {
  char *s = "hello";
  printf("%s literal\n", s);
  char *s2 = malloc(strlen(s) + 9); // 9 is the length of " literal"
  strcpy(s2, s);
  strcat(s2, " literal");
  printf("%s\n", s2);
  free(s2);
  return 0;
}