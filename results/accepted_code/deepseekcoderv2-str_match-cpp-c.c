#include <stdio.h>
#include <string.h>

void check_starts_with(const char *s1, const char *s2) {
  int len1 = strlen(s1);
  int len2 = strlen(s2);
  if (len1 >= len2 && strncmp(s1, s2, len2) == 0) {
    printf("String '%s' starts with '%s'\n", s1, s2);
  } else {
    printf("String '%s' does not start with '%s'\n", s1, s2);
  }
}

void check_contains(const char *s1, const char *s2) {
  if (strstr(s1, s2) != NULL) {
    printf("String '%s' contains '%s'\n", s1, s2);
  } else {
    printf("String '%s' does not contain '%s'\n", s1, s2);
  }
}

void check_ends_with(const char *s1, const char *s2) {
  int len1 = strlen(s1);
  int len2 = strlen(s2);
  if (len1 >= len2 && strncmp(s1 + len1 - len2, s2, len2) == 0) {
    printf("String '%s' ends with '%s'\n", s1, s2);
  } else {
    printf("String '%s' does not end with '%s'\n", s1, s2);
  }
}

int main() {
  const char *s1 = "abcd";
  const char *s2 = "ab";
  const char *s3 = "abab";

  check_starts_with(s1, s2);
  check_ends_with(s1, s2);
  check_contains(s1, s3);

  return 0;
}