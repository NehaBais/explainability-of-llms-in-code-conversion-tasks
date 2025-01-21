#include <stdio.h>

int main() {
  char s[] = "hello";
  char result[50]; // Buffer to hold the concatenated result

  // Concatenating the original string with another string literal
  strcpy(result, s);
  strcat(result, " there!");

  printf("%s\n", result);

  return 0;
}