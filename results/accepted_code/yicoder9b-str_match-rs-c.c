#include <stdio.h>
#include <string.h>

void print_match(char *s1, char *s2) {
  char *match = strstr(s1, s2); // Find the match
  if (match != NULL) {
    printf("Found match at pos %ld\n",
           match - s1); // Calculate position of match
  } else {
    puts("Did not find any matches");
  }
}

int main() {
  char s1[] = "abcd";
  char s2[] = "abab";
  char s3[] = "ab";

  // Determining if the first string starts with second string
  if (strncmp(s1, s3, strlen(s3)) == 0) {
    puts("s1 starts with s3");
  } else {
    puts("s1 does not start with s3");
  }
  // Determining if the first string contains the second string at any location
  if (strstr(s1, s3) != NULL) {
    puts("s1 contains s3");
  } else {
    puts("s1 does not contain s3");
  }
  // Print the location of the match
  print_match(s1, s3); // Found match at pos 0
  print_match(s1, s2); // Did not find any matches
  // Determining if the first string ends with the second string
  if (strcmp(s1 + strlen(s1) - strlen(s3), s3) == 0) {
    puts("s1 ends with s3");
  } else {
    puts("s1 does not end with s3");
  }
  return 0;
}