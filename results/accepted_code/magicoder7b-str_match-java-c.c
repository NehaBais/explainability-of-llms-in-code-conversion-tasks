#include <stdio.h>
#include <string.h>

void startsWith(char *str, char *substr) {
  if (strncmp(str, substr, strlen(substr)) == 0) {
    printf("'%s' starts with '%s'\n", str, substr);
  } else {
    printf("'%s' does not start with '%s'\n", str, substr);
  }
}

void containsAtAnyLocation(char *str, char *substr) {
  if (strstr(str, substr) != NULL) {
    printf("'%s' contains '%s' at any location\n", str, substr);
  } else {
    printf("'%s' does not contain '%s' at any location\n", str, substr);
  }
}

void endsWith(char *str, char *substr) {
  if (strcmp(str + strlen(str) - strlen(substr), substr) == 0) {
    printf("'%s' ends with '%s'\n", str, substr);
  } else {
    printf("'%s' does not end with '%s'\n", str, substr);
  }
}

int main() {
  char *str1 = "abcd";
  char *str2 = "ab";
  startsWith(str1, str2);

  char *str3 = "abcd";
  char *str4 = "zn";
  endsWith(str3, str4);

  char *str5 = "abab";
  char *str6 = "bb";
  containsAtAnyLocation(str5, str6);

  int loc;
  char *str7 = "abab";
  char *str8 = "ab";
  loc = (int)strstr(str7, str8) -
        str7; // Calculate starting position of the first occurrence.
  containsAtAnyLocation(str5, str6);

  return 0;
}