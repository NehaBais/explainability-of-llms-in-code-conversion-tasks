#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char *string = malloc(10 * sizeof(char));
  strcpy(string, "def");
  strcat(string, "abc");

  printf("%s\n", string);

  free(string);

  return 0;
}