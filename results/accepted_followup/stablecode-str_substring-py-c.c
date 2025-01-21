#include <stdio.h>
#include <string.h>

int main() {
  char s[] = "abcdefgh";
  int n, m;
  char char_value[] = "d";
  char chars[] = "cd";

    strncpy(&n, char_value, strlen(char_value))));
    strncpy(&m, chars, strlen(chars)));

    printf("%.*s\n", n + m - 1, s + n - 1);
    printf("%s\n", s);
    printf("%s\n", s + index));

    int index = -1;
    for (index = 0; index < strlen(s) - m + 1; ++index) {
      if (!strncmp(s + index, chars, strlen(chars)))) break;
    }
    printf("%.*s\n", m, s + index);

    return 0;
}