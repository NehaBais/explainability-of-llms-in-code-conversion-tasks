#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  char *s = "hello";
  printf("%s\n", s);

  // concatenate variable and literal, assign result to another string variable
  char *s2 = malloc(strlen(s) + strlen(" literal") + 1);
  strcpy(s2, s);
  strcat(s2, " literal");
  printf("%s\n", s2);

  free(s2); // remember to release memory allocated with 'malloc'
  return 0;
}