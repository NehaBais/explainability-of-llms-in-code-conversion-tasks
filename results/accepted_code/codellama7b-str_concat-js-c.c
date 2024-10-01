#include <stdio.h>

int main() {
  char s[] = "hello";
  printf("%s\n", s); // prints "hello"

  char *concat_str = malloc(strlen(s) + strlen(" there!") + 1);
  strcpy(concat_str, s);
  strcat(concat_str, " there!");
  printf("%s\n", concat_str); // prints "hello there!"

  return 0;
}