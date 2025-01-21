#include <stdio.h>
#include <string.h>

int main() {
  char str[100];

  // Initialize and print the first string
  strcpy(str, "abc");
  printf("%s\n", str);

  // Append another string and print it
  strcat(str, "def");
  printf("%s\n", str);

  return 0;
}