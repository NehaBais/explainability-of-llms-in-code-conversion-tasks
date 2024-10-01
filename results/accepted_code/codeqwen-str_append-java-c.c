#include <stdio.h>
#include <string.h>

int main() {
  char string[] = "abc";
  printf("%s\n", string);

  strcat(string, "def"); // Append the string variable with another string
                         // literal in the most idiomatic way.
  printf("%s\n", string);

  return 0;
}