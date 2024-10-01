#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char *s = malloc(sizeof(char) * 20);
  strcpy(s, "World");
  s[5] = ' ';
  printf("%s", s);
  free(s);
  return 0;
}