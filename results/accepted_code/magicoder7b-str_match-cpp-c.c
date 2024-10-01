#include <stdio.h>
#include <string.h>

int main() {
  char s1[] = "abcd";
  char s2[] = "ab";
  char s3[] = "abab";

  // Beginning
  if (strncmp(s1, s3, strlen(s3)) == 0) {
    printf("The string starts with the substring.\n");
  } else {
    printf("The string does not start with the substring.\n");
  }

  // Anywhere (not ending)
  size_t pos = strcspn(s1, s2);
  if (pos != strlen(s1)) {
    printf("Found at position %ld\n", pos);
  } else {
    printf("The string does not contain the substring.\n");
  }

  // End
  pos = strcspn(s1 + strlen(s1) - strlen(s2), s2);
  if (pos != strlen(s1) - strlen(s2)) {
    printf("The string ends with the substring.\n");
  } else {
    printf("The string does not end with the substring.\n");
  }

  return 0;
}