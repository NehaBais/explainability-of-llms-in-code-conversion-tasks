#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char *s = "hello";
  printf("%s\n", s);

  // Allocate memory for the new string
  char *s1 = malloc(strlen(s) + strlen(" world") + 1);
  if (s1 == NULL) {
    exit(-1); // Exit if there is no enough space to allocate memory
  }

  // Concatenate the strings
  strcpy(s1, s);
  strcat(s1, " world");

  printf("%s\n", s1);

  free(s1); // Free allocated memory
  return 0;
}