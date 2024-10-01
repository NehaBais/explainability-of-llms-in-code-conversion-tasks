#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char *s = (char *)malloc(6); // 5 for 'hello' and 1 for the null terminator
  strcpy(s, "hello");

  printf("%s\n", s);

  char *s1 =
      (char *)malloc(12); // 11 for ' hello world' and 1 for the null terminator
  sprintf(s1, "%s world", s);

  printf("%s\n", s1);

  free(s);
  free(s1);

  return 0;
}