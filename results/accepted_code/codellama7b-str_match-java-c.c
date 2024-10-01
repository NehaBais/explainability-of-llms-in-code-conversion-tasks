#include <stdio.h>
#include <string.h>

int main() {
  char *str1 = "abcd";
  char *str2 = "ab";
  char *str3 = "zn";
  char *str4 = "bb";
  char *str5 = "abab";

  // Determine if the first string starts with second string
  printf("Does '%s' start with '%s': %s\n", str1, str2,
         (strncmp(str1, str2, strlen(str2)) == 0) ? "yes" : "no");

  // Determine if the first string contains the second string at any location
  printf("Does '%s' contain '%s': %s\n", str1, str4,
         (strstr(str1, str4) != NULL) ? "yes" : "no");

  // Determine if the first string ends with second string
  printf("Does '%s' end with '%s': %s\n", str1, str3,
         (strrchr(str1, str3[0]) == NULL) ? "no" : "yes");

  // Find the location of the match for part 2
  char *result = strstr(str5, str4);
  if (result != NULL) {
    printf("Match found at position %d\n", result - str5);
  } else {
    printf("No match found\n");
  }

  return 0;
}