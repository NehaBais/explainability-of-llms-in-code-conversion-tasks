#include <stdio.h>
#include <string.h>

int main() {
  char s1[] = "abcd";
  char s2[] = "abab";
  char s3[] = "ab";

  // Beginning
  if (strncmp(s1, s3, strlen(s3)) == 0) {
    printf("The first string starts with the second string.\n");
  }

  // End
  if (strcmp(s1 + (strlen(s1) - strlen(s3)), s3) == 0) {
    printf("The first string ends with the second string.\n");
  }

  // Anywhere
  char *found = strstr(s1, s2);

  if (found != NULL) {
    int loc = found - s1;
    printf("Found match at location: %d\n", loc);
  } else {
    printf("The first string does not contain the second string.\n");
  }
  return 0;
}