#include <stdio.h>
#include <string.h>

int main() {
  char s[9] = "12345678"; // create a string variable with enough space for the
                          // new content
  char *prepend = "0"; // define a pointer to a string literal to be prepended

  int len_s = strlen(s); // get the length of original string
  int len_prepend = strlen(prepend);

  // allocate memory for new string and copy existing strings into it
  char *s_new = malloc(len_s + len_prepend + 1);
  strcpy(s_new, prepend);
  strcat(s_new, s);

  printf("%s\n", s_new);

  free(s_new); // don't forget to free the allocated memory

  return 0;
}