#include <stdio.h>
#include <string.h>

int main() {
  char s1[50] = "Hello"; // Create a string variable equal to any text value.

  strcat(
      s1,
      ", World!"); // Append another string literal in the most idiomatic way.

  printf("%s\n",
         s1); // Show the contents of the variable after the append operation.

  return 0;
}