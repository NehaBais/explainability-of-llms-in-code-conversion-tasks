#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  // Declare string variable s
  char *s = malloc(sizeof(char) *
                   7); // 6 characters for "Hello," plus a null terminator

  if (s == NULL) {
    printf("Memory allocation failed.\n");
    return -1;
  }

  strcpy(s, ", World"); // Copy the string literal ", World" into s

  char *prepend = malloc(sizeof(char) *
                         7); // 6 characters for "Hello," plus a null terminator

  if (prepend == NULL) {
    printf("Memory allocation failed.\n");
    free(s);
    return -1;
  }

  strcpy(prepend, "Hello"); // Copy the string literal "Hello" into prepend

  // Prepend prepend to s and print result
  char *result =
      malloc(sizeof(char) * (strlen(prepend) + strlen(s) +
                             1)); // Length of result is length of prepend plus
                                  // s, plus a null terminator

  if (result == NULL) {
    printf("Memory allocation failed.\n");
    free(s);
    free(prepend);
    return -1;
  }

  strcpy(result, prepend); // Copy the string literal "Hello" into result
  strcat(result, s);       // Append the string in s to result

  printf("%s\n", result);

  free(s); // Don't forget to free allocated memory
  free(prepend);
  free(result);

  return 0;
}