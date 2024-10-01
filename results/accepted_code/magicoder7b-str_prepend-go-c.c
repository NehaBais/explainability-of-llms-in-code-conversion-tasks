#include <stdio.h>
#define MAX_SIZE 256
char s[MAX_SIZE];

int main() {
  char string1[] = "world!";
  strncpy(s, "Hello, ", MAX_SIZE); // Prepend the constant string to `s`
  strncat(s, string1, MAX_SIZE - strlen(s)); // Append the second string to `s`

  printf("%s\n", s); // Print the result

  return 0;
}