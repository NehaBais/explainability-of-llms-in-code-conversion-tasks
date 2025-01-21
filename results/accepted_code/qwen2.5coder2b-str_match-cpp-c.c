#include <stdio.h>
#include <string.h>

int main() {
  char s1[] = "abcd";
  char s2[] = "abab";
  char s3[] = "ab";

  // Beginning match
  if (strncmp(s1, s3, strlen(s3)) == 0) {
    printf("String '%s' starts with '%s'.\n", s1, s3);
  } else {
    printf("String '%s' does not start with '%s'.\n", s1, s3);
  }

  // End match
  if (strncmp(s1 + strlen(s1) - strlen(s3), s3, strlen(s3)) == 0) {
    printf("String '%s' ends with '%s'.\n", s1, s3);
  } else {
    printf("String '%s' does not end with '%s'.\n", s1, s3);
  }

  // Anywhere match
  char *pos;
  pos = strstr(s1, s2);
  if (pos != NULL) {
    printf("The string '%s' contains '%s' starting at position %d.\n", s1, s2,
           pos - s1);
  } else {
    printf("The string '%s' does not contain '%s'.\n", s1, s2);
  }

  return 0;
}