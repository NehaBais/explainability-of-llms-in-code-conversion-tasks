#include
#include
#include
int main() {
  // text assigned to a string variable
  char s[] = "hello";

  // output string variable
  printf("%sn", s);

  // this output requested by original task description, although
  // not really required by current wording of task description.
  printf("%s literaln", s);

  // concatenate variable and literal, assign result to another string variable
  char s2[strlen(s) + strlen(" literal") + 1];
  strcpy(s2, s);
  strcat(s2, " literal");

  // output second string variable
  printf("%sn", s2);

  return 0;
}