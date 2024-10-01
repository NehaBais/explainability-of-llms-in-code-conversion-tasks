#include <stdio.h>
#include <stdlib.h>

int main() {
  char *s = "0123456789";

  int n = 3;
  int m = 4;
  char c = '2';
  char *sub = "456";

  printf("%s\n", &s[n]); // starting from n characters in and of m length
  printf("%s\n",
         &s[n]); // starting from n characters in, up to the end of the string
  printf("%s\n", &s[0], s.size() - 1); // whole string minus the last character
  printf(
      "%s\n", &s[s.find(c)],
      m); // starting from a known character within the string and of m length
  printf(
      "%s\n", &s[s.find(sub)],
      m); // starting from a known substring within the string and of m length
}