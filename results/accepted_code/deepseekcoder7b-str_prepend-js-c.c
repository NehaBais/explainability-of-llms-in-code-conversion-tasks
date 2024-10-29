#include <stdio.h>
#include <string.h>

int main() {
  char s[50] = ", World";

  // Prepend "Hello" to string s. We have to shift the original content of s and
  // then add our prefix
  strcpy(s + 5, s);
  strcpy(s, "Hello");

  printf("%s\n", s);

  return 0;
}