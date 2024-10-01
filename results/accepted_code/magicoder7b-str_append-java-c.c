#include <stdio.h>
#include <string.h>

int main() {
  char string[50];        // Assume we know the maximum size of the string
                          // (otherwise use dynamic memory allocation)
  strcpy(string, "abc");  // Copy initial string to our variable
  printf("%s\n", string); // Print out the contents of the variable

  sprintf(&string[3],
          "def"); // Append string literal to the end of our variable.
                  // Note that it is assumed here that the original string "abc"
                  // is at least 3 characters long, and there's room for an
                  // additional 3-character string afterwards ("abcd").
  printf(
      "%s\n",
      string); // Print out the contents of the variable after append operation
  return 0;
}