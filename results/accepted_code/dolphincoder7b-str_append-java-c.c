#include <stdio.h>
#include <string.h>
int main() {
  char string[10] = "abc"; // Use char array instead of std::string
  strcat(string, "def");   // Append one string to another
  printf("%s\n", string);  // Print the result
  return 0;
}