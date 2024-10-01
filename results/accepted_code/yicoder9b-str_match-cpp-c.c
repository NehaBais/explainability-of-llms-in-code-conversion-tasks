#include <stdio.h>
#include <string.h>

int main() {
  char s1[] = "abcd";
  const char *s2 = "abab";
  const char *s3 = "ab";

  // Beginning
  if (strncmp(s1, s3, strlen(s3)) == 0) {
    printf("s1 starts with s3\n");
  }

  // End
  if (strcmp(s1 + strlen(s1) - strlen(s3), s3) == 0) {
    printf("s1 ends with s3\n");
  }

  // Anywhere
  char *p = strstr(s2, s3); // returns NULL if not found
  if (p != NULL) {
    printf("s3 is found in s2 at location %ld \n", p - s2 + 1);
  }

  // Handle multiple occurrences of a string for part 2.
  while ((p = strstr(p + 1, s3)) != NULL) {
    printf("s3 is found in s2 at location %ld \n", p - s2 + 1);
  }
  return 0;
}