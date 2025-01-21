#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  // Create a string variable equal to any text value
  char *s = strdup("hello");
  printf("%s\n", s);

  // Create another string variable whose value is the original variable
  // concatenated with another string literal
  size_t len = strlen(s) + strlen(" world") +
               1; // Length of " world" plus null terminator
  char *s1 = (char *)malloc(len);
  if (s1 == NULL) {
    fprintf(stderr, "Memory allocation failed\n");
    return 1;
  }

  strcpy(s1, s);
  strcat(s1, " world");
  printf("%s\n", s1);

  // Free the allocated memory for s1
  free(s1);

  return 0;
}