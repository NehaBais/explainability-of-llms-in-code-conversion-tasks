#include <stdio.h>
#include <string.h>

int main() {
  char s[10] = "world!";
  strcpy(s + 5, "Hello, ");
  printf("%s", s); // prints: Hello, world!
  return 0;
}