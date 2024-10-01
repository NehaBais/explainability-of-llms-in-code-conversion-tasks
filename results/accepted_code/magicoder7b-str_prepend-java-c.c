#include <stdio.h>
#define MAX_SIZE 256

int main() {
  char string[MAX_SIZE] = "def";
  snprintf(string, MAX_SIZE, "abc%s",
           string); // Prepend the string variable with another string literal
  printf("%s\n", string); // print the result
  return 0;
}