#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char *s = strdup("hello");
  printf("%s\n", s);

  char *s1 = malloc(strlen(s) + 6);
  strcpy(s1, s);
  strcat(s1, " world");
  printf("%s\n", s1);

  free(s);
  free(s1);

  return 0;
}