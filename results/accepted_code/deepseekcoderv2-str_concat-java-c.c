#include <stdio.h>
#include <string.h>

int main() {
  char s[] = "hello";
  printf("%s literal\n", s);

  // Create a new string to hold the concatenated result
  char s2[100]; // Assuming the maximum length of the resulting string will not
                // exceed 99 characters + null terminator

  // Concatenate the original string with " literal"
  strcpy(s2, s);
  strcat(s2, " literal");

  printf("%s\n", s2);

  return 0;
}