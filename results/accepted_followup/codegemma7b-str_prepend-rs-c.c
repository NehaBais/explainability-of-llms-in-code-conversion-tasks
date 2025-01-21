#include <string.h>

int main() {
  char *s = strdup("World");
  strncat(s, "Hello ", 7);
  printf("%s\n", s);

  free(s);

  return 0;
}