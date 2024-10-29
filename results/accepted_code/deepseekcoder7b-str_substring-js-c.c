#include <stdio.h>
#include <string.h>

void substr_n_m(char *str, int n, int m) {
  for (int i = n; i < n + m && str[i] != '\0'; ++i)
    printf("%c", str[i]);

  printf("\n");
}

void substr_n(char *str, int n) { printf("%s\n", &str[n]); }

void substr_except_last(char *str) {
  printf("%s\n", strndup(str, strlen(str) - 1));
}

void substr_known_char_m(char *str, char c, int m) {
  for (int i = 0; i < strlen(str); ++i) {
    if (str[i] == c) {
      substr_n_m(str + i, 0, m);
      break;
    }
  }
}

void substr_known_substring_m(char *str, char *subStr, int m) {
  char *p = strstr(str, subStr);
  if (p != NULL) {
    substr_n_m(p, 0, m);
  }
}

int main() {
  char *str = "abcdefgh";
  int n = 2;
  int m = 3;

  printf("Starting from position %d and length of %d : ", n, m);
  substr_n_m(str, n, m); // => "cde"

  printf("From position %d to end: ", n);
  substr_n(str, n); //=> "cdefgh"

  printf("Whole string minus last character : ");
  substr_except_last(str); // => "abcdefg"

  char c = 'b';
  printf("From known character '%c' and length of %d: ", c, m);
  substr_known_char_m(str, c, m); //=> "bcd"

  char *subStr = "bc";
  printf("From known substring '%s' and length of %d : ", subStr, m);
  substr_known_substring_m(str, subStr, m); //=> "bcd"

  return 0;
}