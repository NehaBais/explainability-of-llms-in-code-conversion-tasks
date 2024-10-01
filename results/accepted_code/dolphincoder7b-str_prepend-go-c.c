#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
  char *s = "world!";
  strcat(s, "Hello, ");
  printf("%s\n", s);
  return 0;
}