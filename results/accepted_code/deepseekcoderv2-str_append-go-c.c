#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  // Allocate initial size for the string (adjust as needed)
  char *s = malloc(100 * sizeof(char));
  if (!s) {
    perror("Failed to allocate memory");
    return EXIT_FAILURE;
  }
  s[0] = '\0'; // Initialize the string as empty

  // Append "foo" to the string
  strcat(s, "foo");

  // Append "bar" to the string
  strcat(s, "bar");

  // Print the contents of the variable after append operation
  printf("%s\n", s);

  // Free allocated memory
  free(s);

  return EXIT_SUCCESS;
}