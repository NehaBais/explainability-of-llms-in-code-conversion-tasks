#include <stdio.h>

int main() {
  char s[] = "abcdefgh";
  int n = 2, m = 3, char_index = -1, substring_index = -1;

  // starting from n characters in and m length
  printf("%.*s\n", m, &s[n - 1]);

  // whole string minus last character
  for (int i = 0; s[i]; ++i) {
    if ((char)s[i] == s[strlen(s) - 1])
      break;
  }
  printf("%.*s\n", m - 1, &s[i]);

  // starting from n characters in up to the end of string
  for (int i = n - 1; s[i]; ++i) {
    if ((char)s[i] == s[strlen(s) - 1]) {
      char_index = i;
      break;
    }
  }
  printf("%.*s\n", m, &s[char_index - 1]);

  // starting from a known character char= "d" within the string and of m length
  for (int i = n - 1; s[i]; ++i) {
    if ((char)s[i] == 'd')
      break;
  }
  printf("%.*s\n", m, &s[i] + m);

  // starting from a known substring chars= "cd" within the string and of m
  // length
  for (int i = n - 1; s[i]; ++i) {
    if ((char)s[i] == 'c' && (char)s[i + 1] == 'd') {
      substring_index = i;
      break;
    }
  }
  printf("%.*s\n", m, &s[substring_index] + m);
  return 0;
}