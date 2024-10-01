#include <stdio.h>
#include <string.h>

char s1[] = "abcd";
char s2[] = "abab";
char s3[] = "ab";

int main() {
  int i;
  char *str1 = "Hello, world!";
  char *str2 = "world";

  // 1. Determine if the first string starts with second string
  printf("Startswith: %d\n", strncmp(s1, s3, strlen(s3)) == 0);

  // 2. Determine if the first string contains the second string at any location
  i = strstr(s1, s2) != NULL;
  printf("Contains: %d\n", i);

  // 3. Determine if the first string ends with the second string
  char temp[50];
  strcpy(temp, s1 + strlen(s1) - strlen(s2));
  printf("Endswith: %d\n", strcmp(temp, s2) == 0);

  return 0;
}