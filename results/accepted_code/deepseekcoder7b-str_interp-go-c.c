#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char *str = "Mary had a %s lamb";
  char *txt = "big"; // you can replace this with any variable or value

  size_t str_len = strlen(str);
  size_t txt_len = strlen(txt);
  // allocate memory for the new string
  char *out = malloc(str_len + txt_len + 1);
  if (out == NULL) { /* check for allocation failure */
    fprintf(stderr, "Memory allocation failed\n");
    return EXIT_FAILURE;
  }

  // use sprintf to replace %s placeholder with txt value
  sprintf(out, str, txt);

  printf("%s\n", out);

  free(out); // don't forget to free the allocated memory
  return EXIT_SUCCESS;
}