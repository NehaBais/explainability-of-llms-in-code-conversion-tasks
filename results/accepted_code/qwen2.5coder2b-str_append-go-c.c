#include <stdio.h>
#include <string.h>

int main() {
  char s[100];       // Declare a character array of size 100
  strcpy(s, "foo");  // Copy the first string into the array
  strcat(s, "bar");  // Append the second string to the array
  printf("%s\n", s); // Print the concatenated string
  return 0;
}