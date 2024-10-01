#include <stdio.h>
#include <string.h>

void match_strings(char *str1, char *str2) {
  int q1 = 0;
  int q2 = 0;
  int q3 = 0;

  // stringA starts with stringB
  if (strncmp(str1, str2, strlen(str2)) == 0) {
    printf("1: Does '%s' start with '%s'? Yes.\n", str1, str2);
    q1 = 1;
  } else {
    printf("1: Does '%s' start with '%s'? No.\n", str1, str2);
  }

  // stringA contains stringB at any location
  char *p = strstr(str1, str2);
  if (p != NULL) {
    q2 = p - str1;
    printf("2: Is '%s' contained in '%s'? Yes, at index %d.\n", str2, str1, q2);
  } else {
    printf("2: Is '%s' contained in '%s'? No.\n", str2, str1);
  }

  // stringA ends with stringB
  if (strcmp(str1 + strlen(str1) - strlen(str2), str2) == 0) {
    printf("3: Does '%s' end with '%s'? Yes.\n", str1, str2);
    q3 = 1;
  } else {
    printf("3: Does '%s' end with '%s'? No.\n", str1, str2);
  }

  return;
}

int main() {
  char str1[] = "tacoloco";
  char str2[] = "co";
  match_strings(str1, str2);
  return 0;
}