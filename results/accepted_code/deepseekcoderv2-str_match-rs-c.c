#include <stdio.h>
#include <string.h>

void print_match(int possible_match) {
  if (possible_match != -1) {
    printf("Found match at pos %d\n", possible_match);
  } else {
    printf("Did not find any matches\n");
  }
}

int main() {
  char s1[] = "abcd";
  char s2[] = "abab";
  char s3[] = "ab";

  // Determining if the first string starts with second string
  int result;
#ifdef _WIN64
  result = strncmp(s1, s3, strlen(s3));
#else
  result = strncmp(s1, s3, 2);
#endif
  if (result == 0) {
    printf("String starts with %s\n", s3);
  } else {
    printf("String does not start with %s\n", s3);
  }

  // Determining if the first string contains the second string at any location
#ifdef _WIN64
  result = strstr(s1, s3) - s1;
#else
  char *ptr = strstr(s1, s3);
  result = ptr ? (int)(ptr - s1) : -1;
#endif
  print_match(result);

  // Determining if the first string ends with the second string
#ifdef _WIN64
  int len2 = strlen(s2);
  char *endPtr = strchr(s2, s3[0]);
  result = endPtr ? (int)(endPtr - s2) : -1;
#else
  // Note: This is a simplified version of the logic for single byte string
  // comparison. In a more complex scenario, you'd need to consider multiple
  // encodings and character sets.
  int len2 = strlen(s2);
  char *endPtr = strchr(s2, s3[0]);
  result = endPtr ? (int)(endPtr - s2) : -1;
#endif
  if (result != -1 && strlen(s2) == 1 && len2 > 1) {
    printf("String ends with %s\n", s3);
  } else {
    printf("String does not end with %s\n", s3);
  }

  return 0;
}