#include <stdio.h>
#include <string.h>

char *my_sprintf(char *s, const char *format, ...) {
  // TODO: Implement sprintf function
}

int main() {
  char format[] = "Mary had a %s lamb";
  char text[] = "little";
  my_sprintf(format, "%s", text);
  printf("%s\n", format);
  return 0;
}