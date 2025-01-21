#include <stdio.h>
#include <string.h>

int main() {
  char greeting[] = "Hello";

  // Appending the string literal " , world!" to the greeting variable
  strcat(greeting, " , world!");

  printf("%s\n", greeting);

  return 0;
}