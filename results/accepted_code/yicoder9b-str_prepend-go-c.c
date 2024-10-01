#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char *s =
      (char *)malloc(100 * sizeof(char)); // Allocate memory for the string
  strcpy(s, "world!");                    // Assign value to the string

  char prepend[] = "Hello, "; // String literal to be prepended

  int len_prepend = strlen(prepend); // Calculate length of the prepend string
  int len_s = strlen(s);             // Calculate length of the initial string

  // Make sure that we have enough space for both strings and null-terminator
  if (len_prepend + len_s + 1 > 100) {
    printf("Not enough memory!\n");
    return -1;
  }

  // Prepending the string
  memmove(s + len_prepend, s, len_s + 1); /* Move contents of 's' to right after
                                              the space allocated for prepend */
  memcpy(s, prepend, len_prepend); /* Copy 'prepend' string into the beginning
                                       of 's' */

  printf("%s\n", s); // Outputs: "Hello, world!"

  free(s); // Don't forget to release allocated memory after use
  return 0;
}