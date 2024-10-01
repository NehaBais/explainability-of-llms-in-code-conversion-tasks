#include <stdio.h>
#include <string.h>

void print_match(int match_pos) {
  if (match_pos != -1) {
    printf("Found match at pos %d\n", match_pos);
  } else {
    printf("Did not find any matches\n");
  }
}

int main() {
  char s1[] = "abcd";
  char s2[] = "abab";
  char s3[] = "ab";

  // Determining if the first string starts with second string
  if (strncmp(s1, s3, strlen(s3)) == 0) {
    printf("First string starts with second string.\n");
  } else {
    printf("The first string does not start with the second string.\n");
  }
  // Determining if the first string contains the second string at any location
  if (strstr(s1, s3) != NULL) {
    printf("First string contains the second string.\n");
    print_match(strstr(s1, s3) - s1); // Print the location of the match
  } else {
    printf("The first string does not contain the second string.\n");
  }
  // Determining if the first string ends with the second string
  if (strncmp(s1 + strlen(s1) - strlen(s3), s3, strlen(s3)) == 0) {
    printf("First string ends with the second string.\n");
  } else {
    printf("The first string does not end with the second string.\n");
  }
  return 0;
}