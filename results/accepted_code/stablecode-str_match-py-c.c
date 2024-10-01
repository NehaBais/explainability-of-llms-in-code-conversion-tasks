#include <stdio.h>
#include <string.h>

int main() {

  char str1[6] = "abcd";
  char str2[3] = "ab";

  // Checking if the first string starts with the second string
  if (strncmp(str1, str2, strlen(str2))) {
    printf("The first string starts with the second string\n");
  }

  // Checking if the first string contains the second string at any location
  if (strstr(str1, str2) != NULL)) {
      printf("The first string contains the second string at any location\n");
    }

  // Checking if the first string ends with the second string
  if (strncmp(str1 + strlen(str1) - strlen(str2), str2, strlen(str2))) == 0) {
        printf("The first string ends with the second string\n");
    }

  return 0;
}