#include <stdio.h>

int main() {
  char s[] = "hello";

  // output string variable
  printf("%s\n", s);

  // this output requested by original task descrption, although
  // not really required by current wording of task description.
  printf("%s literal\n", s);

  // concatenate variable and literal, assign result to another string variable
  char s2[100]; // assuming the maximum length is 100 characters for simplicity.
  int len = strlen(s);
  strcpy(s2, s);
  strcat(s2, " literal");

  // output second string variable
  printf("%s\n", s2);

  return 0;
}