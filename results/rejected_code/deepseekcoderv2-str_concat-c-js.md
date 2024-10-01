#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  const char* s = "hello";
  char* s2;

  printf("%s literal\n", s); //or
  printf("%s%s\n", s, " literal");

  s2 = strcat(strcpy(malloc(strlen("hello") + strlen(" literal") + 1), "literal"), "literal");

  puts(s2);
  free(s2);
}
