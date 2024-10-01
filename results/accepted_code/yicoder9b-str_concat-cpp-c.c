#include <stdio.h>
#include <string.h>

int main() {
  char s[20] =
      "hello"; // The size of the array is crucial to prevent buffer overflow
  printf("%s literal\n", s);

  // Create another string variable whose value is the original variable
  // concatenated with another string literal.
  char s2[30];
  strcpy(s2, s);          // copy contents of s to s2
  strcat(s2, " literal"); // append "literal" to s2
  printf("%s\n", s2);
  return 0;
}