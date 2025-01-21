#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char *s = "World";
  char *hello_world = malloc(strlen(s) + strlen("Hello ") + 1);
  sprintf(hello_world, "Hello %s", s);
  printf("%s\n", hello_world);
  free(hello_world);
}