#include <stdio.h>
#include <string.h>

int main() {
  char s[10] = "hello";
  printf("%s literal\n", s);
  char s2[20];
  strcpy(s2, s);          // copy the content of s to s2
  strcat(s2, " literal"); // concatenate another string into s2
  printf("%s\n", s2);
  return 0;
}