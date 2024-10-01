#include <string.h>

int main() {
  const char *s1 = "abcd";
  const char *s2 = "abab";
  const char *s3 = "ab";

  // Determining if the first string starts with the second string
  if (strncmp(s1, s3, strlen(s3)) == 0) {
    printf("s1 starts with s3\n");
  } else {
    printf("s1 does not start with s3\n");
  }

  // Determining if the first string contains the second string at any location
  if (strstr(s1, s3) != NULL) {
    printf("s1 contains s3\n");
  } else {
    printf("s1 does not contain s3\n");
  }

  // Print the location of the match
  char *match_pos = strstr(s1, s3);
  if (match_pos != NULL) {
    printf("Found match at pos %ld\n", match_pos - s1);
  } else {
    printf("Did not find any matches\n");
  }

  // Determining if the first string ends with the second string
  if (strncmp(s1 + strlen(s1) - strlen(s3), s3, strlen(s3)) == 0) {
    printf("s2 ends with s3\n");
  } else {
    printf("s2 does not end with s3\n");
  }

  return 0;
}