#include <stdio.h>
#include <string.h>

void print_substring(const char *str, int n, int m) {
  const char *start = str + n;
  if (m > 0 && start[0] != '\0') {
    printf("Substring from %d with length %d: ", n, m);
    fwrite(start, sizeof(char), m < strlen(start) ? m : strlen(start), stdout);
    printf("\n");
  } else {
    printf("Invalid substring parameters.\n");
  }
}

int main() {
  char s[] = "ABCDEFGH";
  int n, m;

  // for reference
  printf("Index: 01234567\n");
  printf("String:%s\n", s);

  // starting from n characters in and of m length
  n = 2;
  m = 3;
  print_substring(s, n, m);

  // starting from n characters in, up to the end of the string
  n = 2;
  m = -1; // use negative length to signify "to end"
  print_substring(s, n, m);

  // whole string minus last character
  n = 0;
  m = strlen(s) - 1;
  print_substring(s, n, m);

  // starting from a known character within the string and of m length
  char search_char = 'D';
  int index =
      strchr(s, search_char) - s; // find index of first occurrence of 'D'
  if (index != -1) {
    print_substring(s, index, m);
  } else {
    printf("Character '%c' not found in the string.\n", search_char);
  }

  // starting from a known substring within the string and of m length
  char search_substr[] = "DE";
  index =
      strstr(s, search_substr) - s; // find index of first occurrence of "DE"
  if (index != NULL) {
    print_substring(s, index, m);
  } else {
    printf("Substring 'DE' not found in the string.\n");
  }

  return 0;
}