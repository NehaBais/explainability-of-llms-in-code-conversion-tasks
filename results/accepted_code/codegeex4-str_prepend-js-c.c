#include <stdio.h>
#include <string.h>

void prepend_string(char *original_str, const char *str_to_prepend) {
  int len1 = strlen(original_str);
  int len2 = strlen(str_to_prepend);

  // Allocate new memory for the string with space for both strings
  char *new_str = (char *)malloc((len1 + len2 + 1) * sizeof(char));

  // Copy str_to_prepend to the new string
  strcpy(new_str, str_to_prepend);
  // Concatenate original_str to the new string
  strcat(new_str, original_str);

  printf("%s\n", new_str); // Print out the new string

  // Free the allocated memory
  free(new_str);
}

int main() {
  char s[] = ", World";
  prepend_string("Hello", s);

  return 0;
}