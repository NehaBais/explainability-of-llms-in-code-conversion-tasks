#include <stdio.h>
#include <string.h>

int main() {
  char s[] = "hello";
  printf("%s literal\n", s);

  char s2[strlen(s) +
          10]; // Add 10 for the 'literal' string length and null terminator
  strcpy(s2, s);
  strcat(s2, " literal");
  printf("%s\n", s2);

  return 0;
}