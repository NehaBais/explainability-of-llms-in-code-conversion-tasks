#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char *s = (char *)malloc(4); // Allocate memory for "foo"
  if (s == NULL) {
    printf("Memory allocation failed.\n");
    return 1;
  }
  strcpy(s, "foo");

  s = realloc(s, strlen(s) + strlen("bar") +
                     1); // Reallocate memory to accommodate "bar"
  if (s == NULL) {
    printf("Memory reallocation failed.\n");
    free(s);
    return 1;
  }
  strcat(s, "bar"); // Concatenate string

  printf("%s\n", s);

  free(s); // Don't forget to free the allocated memory
  return 0;
}