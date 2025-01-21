#include <stdio.h>
#include <string.h>

int main() {
  char str1[] = "abcd";
  char str2[] = "ab";
  if (strncmp(str1, str2, strlen(str2)) == 0) {
    printf("The string %s starts with %s\n", str1, str2);
  } else {
    printf("The string %s does not start with %s\n", str1, str2);
  }

  if (strstr(str1, str2) != NULL) {
    printf("The string %s contains the substring %s at index %d\n", str1, str2,
           strstr(str1, str2) - str1);
  } else {
    printf("The string %s does not contain the substring %s\n", str1, str2);
  }

  if (strcmp(str1 + strlen(str1) - strlen(str2), str2) == 0) {
    printf("The string %s ends with %s\n", str1, str2);
  } else {
    printf("The string %s does not end with %s\n", str1, str2);
  }

  return 0;
}