#include <stdio.h>

int main() {
  // Create a string variable equal to any text value
  char s[] = "hello";

  // Create another string variable whose value is the original variable
  // concatenated with another string literal
  char t[20]; // Ensure this array has enough space to hold the concatenated
              // result
  sprintf(t, "%s there!", s);

  // Print out the content of both variables
  printf("s: %s\n", s);
  printf("t: %s\n", t);

  return 0;
}