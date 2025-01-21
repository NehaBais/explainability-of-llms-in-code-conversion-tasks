#include <string.h>

int main() {
  char s1[] = "abcd";
  char s2[] = "abab";
  char s3[] = "ab";

  // Contains at any location
  if (strchr(s1, s2[0]) != NULL) {
    printf("String contains %s\n", s2);
  } else {
    printf("String does not contain %s\n", s2);
  }
  // Locating next occurrence
  char *loc = strstr(&s1[0], &s3[0]);
  if (loc != NULL) {
    printf("Next occurrence of '%s' at location %p\n", s3, loc);
  } else {
    printf("No next occurrence of '%s'\n", s3);
  }

  return 0;
}