#include <stdio.h>
int main() {
  char string[100]; // Assuming string length to be 99 characters
  sprintf(string, "abc",
          "def"); // Using sprintf function to concatenate strings
  printf("%s\n", string);
  return 0;
}