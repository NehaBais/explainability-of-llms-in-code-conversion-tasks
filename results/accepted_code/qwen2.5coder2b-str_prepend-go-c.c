#include <stdio.h>

int main() {
  char world[] = "world!";
  char greeting[] = "Hello, ";

  // Prepend the string variable with another string literal
  strcat(greeting, world);

  printf("%s\n", greeting);
  return 0;
}