#include <stdio.h>
#include <string.h>

int main() {
  // text assigned to a string variable
  char s[100] = "hello";

  // output string variable
  printf("%s\n", s);

  // this output requested by original task descrption, although
  // not really required by current wording of task description.
  printf("%s literal\n", s);

  // concatenate variable and literal, assign result to another string variable
  char s2[100];
  strcpy(s2, s); // Copy the content of s into s2
  strncat(s2, " literal",
          sizeof(s2) - strlen(s2)); // Concatenate with new literal

  // output second string variable
  printf("%s\n", s2);

  return 0;
}