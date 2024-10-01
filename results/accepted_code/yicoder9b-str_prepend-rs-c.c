#include <stdio.h>
#include <string.h>

int main() {
  char *s = malloc(sizeof(char) *
                   100); // Allocate enough space for a string of length 100
  strcpy(s, "World");    // Copy the text value to our char array

  char *prepend = "Hello "; // String literal we want to prepend
  int s_length = strlen(s), prepend_length = strlen(prepend);

  // Make sure that we have enough space allocated for the new string
  s = realloc(s, sizeof(char) *
                     (s_length + prepend_length +
                      1)); // +1 for null character at end of strings in C

  memmove(s + prepend_length, s,
          s_length + 1); // Make space for the prepended string by moving
                         // original contents to right
  strncpy(s, prepend, prepend_length); // Copy the prepended string into the
                                       // beginning of our char array

  printf("%s\n", s); // Print out the resulting string

  free(s); // Don't forget to free allocated memory when it is no longer needed.

  return 0;
}