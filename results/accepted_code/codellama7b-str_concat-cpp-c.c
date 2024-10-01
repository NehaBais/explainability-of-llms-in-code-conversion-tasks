#include <stdio.h>
#include <string.h>

int main() {
  char *s = "hello";
  printf("%s literal\n", s);
  char *s2 = (char *)malloc(strlen(s) + strlen(" literal") + 1);
  strcpy(s2, s);
  strcat(s2, " literal");
  printf("%s\n", s2);
  free(s2);
  return 0;
}