#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char *s = "hello";
  printf("%s literal\n", s);
  char *s2 = strcat(strdup(s), " literal");
  printf("%s\n", s2);
  free(s2); // to prevent memory leak
  return 0;
}