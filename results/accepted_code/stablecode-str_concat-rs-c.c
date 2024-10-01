#include <stdio.h>
#include <string.h>

int main() {

  char s[100] = "hello";
  printf("%s\n", s);

  char s1[100];
  strcpy(s1, s);
  strcat(s1, " world");
  printf("%s\n", s1);
}