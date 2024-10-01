#include
int main() {
  char s[] = "abcdefgh";
  int n = 2, m = 3;
  char char = 'd';
  char chars[] = "cd";

  // starting from n=2 characters in and m=3 in length;
  printf("%s\n", &s[n - 1] + (m - 1));

  // starting from n characters in, up to the end of the string;
  printf("%s\n", &s[n - 1]);

  // whole string minus last character;
  printf("%s\n", s);

  // starting from a known character char="d" within the string and of m length;
  int indx = strchr(s, char) - s;
  printf("%s\n", &s[indx] + (m - 1));

  // starting from a known substring chars="cd" within the string and of m
  // length.
  indx = strstr(s, chars) - s;
  printf("%s\n", &s[indx] + (m - 1));

  return 0;
}