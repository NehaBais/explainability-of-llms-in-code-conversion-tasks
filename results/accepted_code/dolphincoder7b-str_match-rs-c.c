#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 256

int find_match(char *first, char *second) {
  int i = 0;
  int k = 0;

  for (i = 0; i <= strlen(first); ++i) {
    while (k < strlen(second))
      &&*(first + i + k) == *(second + k) { k++; }

    if (k >= strlen(second)) {
      return i;
    } else {
      k = 0;
    }
  }

  return -1;
}

int main() {
  char s1[MAX_LENGTH];
  char s2[MAX_LENGTH];
  int match_pos;

  strcpy(s1, "abcd");
  strcpy(s2, "abab");
  strcpy(s3, "ab");

  // Determining if the first string starts with second string
  printf("%s\n", (strcmp(strstr(s1, s3), s1) == 0 ? "Starts with"
                                                  : "Does not start with"));

  // Determining if the first string contains the second string at any location
  printf("%s\n", (strstr(s1, s2) != NULL ? "Contains" : "Does not contain"));

  // Print the location of the match
  match_pos = find_match(s1, s3);
  printf("Match found at pos: %d\n", match_pos); // Found match at pos: 0

  return 0;
}