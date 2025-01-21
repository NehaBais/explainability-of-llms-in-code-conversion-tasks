#include <stdio.h>
#include <string.h> // Include the string library here

int main() {
  char s1[] = "Hello";
  strcat(s1, ", World!");
  printf("%s\n", s1);
  return 0;
}