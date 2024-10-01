#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char *s = "World";
  char *res = malloc(
      15 * sizeof(char));       // allocate memory for the string "Hello " and s
  strcpy(res, "Hello ");        // copy the string "Hello " to res
  strcat(res + strlen(res), s); // append s to res

  printf("%s\n", res); // print the result
  free(res);
  return 0;
}