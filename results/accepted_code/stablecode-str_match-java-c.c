#include <stdio.h>
#include <string.h>

int main() {
  char str1[6] = "abcd";
  char str2[3] = "ab";
  size_t n = strlen(str1);

  printf("%s %ssubstring of %s\n", str1[0] == str2[0] ? "true" : "false",
         str1.startsWith(str2) ? "matches" : "doesn't match", str1, str2);

  if (strstr(str1, str2)) {
    printf("'%s' starts with '%s'\n", str1, str2);
  } else {
    printf("'%s' does not start with '%s'\n", str1, str2);
  }

  if (strpos(str1, str2)) {
    printf("'%s' contains '%s' at any location\n", str1, str2);
  } else {
    printf("'%s' does not contain '%s' at any location\n", str1, str2);
  }

  if (strncmp(str1 + n - strlen(str2), str2)) == 0) {
        printf("'%s' ends with '%s'\n", str1, str2);
    }
  else {
    printf("'%s' does not end with '%s'\n", str1, str2);
  }

  return 0;
}