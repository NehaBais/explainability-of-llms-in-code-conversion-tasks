#include <stdio.h>
#include <string.h>

int main() {
  // text assigned to a string variable
  char s[] = "hello";

  // output string variable
  printf("%s\n", s);

  // create a buffer for the concatenated result
  char s2[100]; // assuming the maximum length of the final string will not
                // exceed 99 characters

  // concatenate variable and literal, assign result to another string variable
  strcpy(s2, s); // Copy the original string to the new buffer
  strcat(s2,
         " literal"); // Concatenate the literal to the end of the new buffer

  // output second string variable
  printf("%s\n", s2);

  return 0;
}