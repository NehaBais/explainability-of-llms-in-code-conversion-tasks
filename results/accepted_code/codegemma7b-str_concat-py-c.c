#include <stdio.h>
#include <string.h>

int main() {
  // Create a string variable equal to any text value
  char s1[] = "hello";

  // Create another string variable whose value is the original variable
  // concatenated with another string literal
  char s2[strlen(s1) + 6];
  strcpy(s2, s1);
  strcat(s2, " world");

  // Print the content of the variables
  printf("%s\n", s2);

  // Create a string variable with multiple elements
  char s3[] = "hello";
  char s4[strlen(s3) + 10];
  strcpy(s4, s3);
  strcat(s4, ", world, mom");

  printf("%s\n", s4);

  return 0;
}