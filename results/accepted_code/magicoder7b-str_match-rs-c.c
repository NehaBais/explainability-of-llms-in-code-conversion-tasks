#include <stdio.h>
#include <string.h>

void print_match(const char *possible_match) {
  if (possible_match == NULL) {
    printf("Did not find any matches\n");
  } else {
    printf("Found match at pos %ld\n", strlen(possible_match));
  }
}

int main() {
  const char *s1 = "abcd";
  const char *s2 = "abab";
  const char *s3 = "ab";

  // Determining if the first string starts with second string
  if (strncmp(s1, s3, strlen(s3)) == 0) {
    printf("String starts with substring\n");
  }

  // Determining if the first string contains the second string at any location
  char *found = strstr(s1, s2);
  print_match((char *)found);

  // Determining if the first string ends with the second string
  if (strlen(s2) <= strlen(s3) &&
      strncmp(s3 + strlen(s3) - strlen(s2), s1 + strlen(s1) - strlen(s3),
              strlen(s2)) == 0) {
    printf("String ends with substring\n");
  }

  return 0;
}