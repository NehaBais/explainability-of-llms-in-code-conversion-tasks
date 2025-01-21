#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  // Create a string variable equal to any text value.
  char s[] = "hello";

  printf("%s literal\n", s);

  // Dynamically allocate memory for the new string and concatenate it with
  // another string literal
  size_t len1 = strlen(s);
  size_t len2 = strlen(" literal");
  char *s2 = (char *)malloc((len1 + len2 + 1) * sizeof(char));

  if (s2 == NULL) {
    fprintf(stderr, "Memory allocation failed\n");
    return -1;
  }

  strcpy(s2, s);
  strcat(s2, " literal");

  printf("%s\n", s2);

  // Don't forget to free the allocated memory
  free(s2);

  return 0;
}