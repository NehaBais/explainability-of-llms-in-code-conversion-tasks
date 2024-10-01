#include <assert.h>
#include <stdio.h>
#include <string.h>

void print_match(int match) {
  if (match != -1) {
    printf("Found match at pos %d\n", match);
  } else {
    printf("Did not find any matches\n");
  }
}

int main() {
  char *s1 = "abcd";
  char *s2 = "abab";
  char *s3 = "ab";

  // Determining if the first string starts with second string
  assert(strncmp(s1, s3, strlen(s3)) == 0);
  // Determining if the first string contains the second string at any location
  print_match(strstr(s1, s2)); // Found match at pos 0
  print_match(strstr(s1, s3)); // Did not find any matches
  // Determining if the first string ends with the second string
  assert(strcmp(s2, s3) == 0);
}