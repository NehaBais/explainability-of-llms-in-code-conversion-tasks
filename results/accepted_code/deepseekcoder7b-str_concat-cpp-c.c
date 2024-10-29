#include <stdio.h>
#include <string.h>

int main() {
  char s[] = "hello";
  printf("%s literal\n", s);

  char
      s2[104]; // We need to provide space for the new string and null character
  strcpy(s2, s);
  strcat(s2, " literal");
  printf("%s\n", s2);

  return 0;
}