#include <stdio.h>
#include <stdlib.h> // Adding this for malloc and free
#include <string.h>

int main() {
  char *s = "hello";
  printf("%s\n", s);

  int len1 = strlen(s);
  char *s1 = (char *)malloc(
      (len1 + 6) * sizeof(char)); // "+6" for the space and null character.
  if (s1 == NULL) {
    printf("Memory allocation failed\n");
    exit(-1);
  }
  strcpy(s1, s);
  strcat(s1, " world");
  printf("%s\n", s1);

  free(s1);
}