#include <stdio.h>
#include <string.h>

void print_match(int possible_match) {
  if (possible_match != -1)
    printf("Found match at pos %d\n", possible_match);
  else
    printf("Did not find any matches\n");
}

int main() {
  char s1[6] = "abcd";
  char s2[6] = "abab";
  char s3[4] = "ab";

  // Determining if the first string starts with second string
  if (strncmp(s1, s3, strlen(s3))) {
    printf("First string starts with second string\n");
    print_match(0); // found match at position 0
  }

  // Determining if the first string contains the second string at any location
  if (strstr(s1, s2)) {
    printf("First string contains the second string at any location\n");
    print_match(3); // Found match at pos 3
  }

  // Determining if the first string ends with the second string
  if (strncmp(s1 + strlen(s1) - strlen(s2), s2, strlen(s2))) {
    printf("First string ends with the second string\n");
    print_match(7); // Found match at pos 7
  }

  return 0;
}