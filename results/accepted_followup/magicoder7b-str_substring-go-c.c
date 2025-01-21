#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printSubString(char *str, int n, int m) {
  printf("Index: %s\n", "01234567"); // reference index
  printf("String: %s\n", str);

  if (m < strlen(str) - n) {
    char *substring = malloc((strlen(str) - n) * sizeof(char));
    memcpy(substring, &str[n],
           (strlen(str) - n) * sizeof(char)); // starting from n characters in

    printf("Start %d, length %d:    %s\n", n, m, substring);

    free(substring);
  } else {
    printf("Invalid parameters for this operation.\n");
  }

  if (n < strlen(str)) {
    char *substring = malloc((strlen(str) - n) * sizeof(char));
    memcpy(substring, &str[n],
           (strlen(str) - n) * sizeof(char)); // starting from n characters in

    printf("Start %d, to end:      %s\n", n, substring);

    free(substring);
  } else {
    printf("Invalid parameters for this operation.\n");
  }

  if (strlen(str) > 1) {
    char *substring = malloc((strlen(str) - 1) * sizeof(char));
    memcpy(substring, str,
           (strlen(str) - 1) * sizeof(char)); // all but the last character

    printf("All but last:         %s\n", substring);

    free(substring);
  } else {
    printf("Invalid parameters for this operation.\n");
  }

  char *substr = "DE";
  int dx = strstr(str, substr) -
           str; // starting from a known character within the string

  if (dx >= 0 && dx + m <= strlen(str)) {
    substring = malloc((strlen(str) - dx) * sizeof(char));
    memcpy(substring, &str[dx],
           (strlen(str) - dx) * sizeof(char)); // starting from 'D'

    printf("Start '%s', length %d:  %s\n", substr, m, substring);

    free(substring);
  } else {
    printf("Invalid parameters for this operation.\n");
  }

  int sx =
      strstr(str, "DE") -
      str; // Starting from a known substring within the string and of m length.

  if (sx >= 0 && sx + m <= strlen(str)) {
    char *substring = malloc((strlen(str) - sx) * sizeof(char));
    memcpy(substring, &str[sx],
           (strlen(str) - sx) * sizeof(char)); // starting from "DE"

    printf("Start \"%s\", length %d:  %s\n", substr, m, substring);

    free(substring);
  } else {
    printf("Invalid parameters for this operation.\n");
  }
}

int main() {
  char *str = "ABCDEFGH";

  printSubString(str, 2, 3);

  return 0;
}