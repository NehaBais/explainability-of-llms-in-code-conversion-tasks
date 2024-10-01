#include <stdio.h>
#include <string.h>

int main() {
  char str1[] = "abcd";
  char str2[] = "ab";
  printf("%d\n", strstr(str1, str2) != NULL); // Part 1 - startsWith

  char str3[] = "zn";
  printf("%d\n", strchr(str1, *str3) == NULL); // Part 2 - endsWith

  char str4[] = "abab";
  char substring[] = "bb";
  if (strstr(str4, substring)) {
    printf("True\n"); // Part 3 - contains
  } else {
    printf("False\n");
  }

  substring[0] = 'a'; // Handle multiple occurrences
  char *pos;
  pos = strstr(str4, substring);
  while (pos != NULL) {
    printf("%d\n", pos - str4);
    pos++;
    pos = strstr(pos, substring);
  }

  return 0;
}