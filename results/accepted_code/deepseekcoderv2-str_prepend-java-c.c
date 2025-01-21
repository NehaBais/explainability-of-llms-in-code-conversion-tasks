#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char string[] = "def";
  char prependedString[] = "abc";

  // Calculate the new length of the combined string
  size_t len = strlen(prependedString) + strlen(string);

  // Allocate memory for the concatenated string
  char *result = (char *)malloc((len + 1) * sizeof(char));

  if (result == NULL) {
    fprintf(stderr, "Memory allocation failed\n");
    return 1;
  }

  // Prepend the prependedString to string
  strcpy(result, prependedString);
  strcat(result, string);

  printf("Prepended String: %s\n", result);

  // Free the allocated memory
  free(result);

  return 0;
}