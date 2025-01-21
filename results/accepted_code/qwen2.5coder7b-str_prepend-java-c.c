#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void concatenate(char **destination, const char *source) {
  size_t dest_len = strlen(*destination);
  size_t source_len = strlen(source);

  *destination =
      (char *)realloc(*destination, dest_len + source_len + 1); // +1 for '\0'

  if (*destination == NULL) {
    fprintf(stderr, "Memory reallocation failed\n");
    exit(1);
  }

  strcat(*destination, source); // Concatenate
}

int main() {
  char *string = "def";

  concatenate(&string, "abc");

  printf("%s\n", string);

  free(string); // Don't forget to deallocate memory when done

  return 0;
}