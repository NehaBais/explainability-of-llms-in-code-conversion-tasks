#include <stdio.h>
#include <string.h>

int main() {
  char s[] = "abcdefgh";
  int n, m;
  char char;
  char *chars;

  // starting from n=2 characters in and m=3 in length;
  printf("%s\n", s + (n - 1) + (n + m - 1));

  // starting from n characters in, up to the end of the string;
  printf("%s\n", s + (n - 1));

  // whole string minus last character;
  printf("%s\n", s);

  // starting from a known character char="d" within the string and of m length;
  int indx = strstr(s, "d");
  if (indx != -1) {
    printf("%s\n", s + indx);
  } else {
    printf("Character not found.\n");
  }

  // starting from a known substring chars="cd" within the string and of m
  // length.
  int indx = strstr(s, "cd");
  if (indx != -1) {
    printf("%s\n", s + indx);
  } else {
    printf("Substring not found.\n");
  }

  return 0;
}