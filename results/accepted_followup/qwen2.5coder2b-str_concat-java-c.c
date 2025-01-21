#include <stdio.h>
#include <string.h>

int main() {
  char s[] = "hello"; // Create a string variable equal to any text value.
  printf("%s literal\n", s); // Output: hello literal

  strcpy(s2, strcat(s, " literal")); // Concatenate another string literal and
                                     // assign the result back to s2
  printf("%s\n", s2);                // Output: helloliteral

  return 0;
}