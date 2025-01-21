#include <stdio.h>
#include <string.h>

int main() {
  char s[] = "0123456789";
  int n = 3;
  int m = 4;
  char c = '2';
  char sub[6] = "456";

  printf("%s\n", &s[n]); // Print the substring starting from n characters
  printf("%s\n", s);     // Print the whole string minus the last character
  printf(
      "%s\n",
      &s[s.find(c)]); // Print the substring starting from a known character c
  printf("%s\n", &s[s.find(sub)]); // Print the substring starting from a known
                                   // substring sub

  return 0;
}