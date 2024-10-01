#include <stdio.h>
#include <string.h>

int main() {
  char s[] = "abcdefgh";
  int n = 2, m = 3;
  char char_search = 'd';
  char chars_search[] = "cd";

  printf("%.*s\n", m,
         &s[n - 1]); // starting from n=2 characters in and of m length

  size_t len = strlen(s) - (n - 1);
  char s1[m + 1];
  memcpy(s1, &s[n - 1], len > m ? m : len);
  printf("%s\n",
         s1); // starting from n characters in, up to the end of the string

  len = strlen(s) - 1;
  char s2[strnlen(s, len)];
  memcpy(s2, s, len);
  printf("%s\n", s2); // whole string minus last character

  size_t pos = strcspn(s, &char_search);
  char s3[m + 1];
  memcpy(s3, &s[pos], m > (strlen(s) - pos) ? (strlen(s) - pos) : m);
  printf(
      "%s\n",
      s3); // starting from a known character within the string and of m length

  pos = strcspn(s, chars_search);
  len = strnlen(chars_search, strlen(chars_search));
  char s4[m + 1];
  memcpy(s4, &s[pos],
         (strlen(s) - pos > m && len < m)
             ? m
             : (strlen(s) - pos > m ? (strlen(s) - pos) : len));
  printf(
      "%s\n",
      s4); // starting from a known substring within the string and of m length

  return 0;
}