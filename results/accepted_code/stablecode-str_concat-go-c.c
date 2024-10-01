#include <stdio.h>
#include <string.h>

int main() {
  // text assigned to a string variable
  char s[20] = "hello";

  // output string variable
  printf("%s\n", s);

  // this output requested by original task descrption, although
  // not really required by current wording of task description.
    strcat(s, " literal"));

    // output the updated string variable
    printf("%s\n", s);

    return 0;
}