#include <stdio.h>
#include <string.h>

int main() {
  char s[] = "hello";
  printf("%s literal\n", s);

  char s2[20];
  strcpy(s2, s);          // copies 's' into 's2'
  strcat(s2, " literal"); // concatenates " literal" to 's2'

  printf("%s\n", s2);

  return 0;
}