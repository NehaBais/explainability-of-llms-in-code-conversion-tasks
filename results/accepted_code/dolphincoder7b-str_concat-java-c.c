#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char s[] = "hello";

  printf("%s literal\n", s);
  char s2[strlen(s) +
          7]; // This line doesn't compile in C++ due to the size of 's'.
  strcpy(s2, s);
  strcat(s2, " literal");

  printf("%s\n", s2);

  return 0;
}