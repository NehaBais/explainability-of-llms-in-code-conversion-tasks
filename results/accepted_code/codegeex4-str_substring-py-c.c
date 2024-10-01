#include <stdio.h>
#include <string.h>

// Function to print substring with UTF-8 support
void print_substring(const char *str, int start, int length) {
  const char *temp = str + start - 1;
  fwrite(temp, sizeof(char), length, stdout);
}

int main() {
  // your string
  char s[] = "abcdefgh";

  // starting from n=2 characters in and m=3 in length;
  print_substring(s, 2, 3);

  printf("\n");

  // starting from n characters in, up to the end of the string;
  print_substring(s, 2, strlen(s));

  printf("\n");

  // whole string minus last character;
  print_substring(s, 1, strlen(s) - 1);

  printf("\n");

  // starting from a known character char="d" within the string and of m length;
  for (int i = 0; s[i] != '\0'; i++) {
    if (s[i] == 'd') {
      print_substring(s, i + 1, 3);
      printf("\n");
      break;
    }
  }

  // starting from a known substring chars="cd" within the string and of m
  // length.
  char chars[] = "cd";
  int len_chars = strlen(chars);

  for (int i = 0; s[i] != '\0'; i++) {
    if (strncmp(&s[i], chars, len_chars) == 0) {
      print_substring(s, i + 1, len_chars);
      printf("\n");
      break;
    }
  }

  return 0;
}