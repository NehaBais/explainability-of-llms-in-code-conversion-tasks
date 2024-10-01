#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char *s = strdup("hello");

  // print the value of s
  printf("%s\n", s);

  char *s1;
  asprintf(&s1, "%s world", s);

  // print the value of s1
  printf("%s\n", s1);

  free(s);
  free(s1);
  return 0;
}