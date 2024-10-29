#include <stdio.h>
#include <string.h>

int main() {
  char s1[] = "abcd";
  char s2[] = "abab";
  char s3[] = "ab";

  // Beginning
  if (strncmp(s1, s3, strlen(s3)) == 0)
    printf("First string starts with second\n");

  // Ending
  size_t len1 = strlen(s1);
  size_t len2 = strlen(s3);

  if (strncmp(s1 + len1 - len2, s3, len2) == 0)
    printf("First string ends with second\n");

  // Anywhere
  if (strstr(s1, s2))
    printf("First string contains the second anywhere\n");

  // Print location of match for part 2
  char *loc = strstr(s2, s3);
  if (loc)
    printf("Second string is found at position: %ld\n", loc - s2 + 1);

  return 0;
}