#include <stdio.h>
#include <string.h>

int main() {
  char str1[] = "abcd";
  char str2[] = "ab";
  if (strncmp(str1, str2, strlen(str2)) == 0)
    printf("String %s starts with string %s\n", str1, str2);

  str2[0] = 'z';
  if (strstr(str1, str2) == NULL)
    printf("String %s does not contain string %s\n", str1, str2);
  else {
    char *ptr = strchr(str1, 'z');
    while (ptr != NULL) {
      printf("Found match at index: %d\n", ptr - str1);
      ptr++;
      ptr = strstr(ptr, "b");
    }
  }

  str2[0] = 'a';
  if (strcmp(str1 + strlen(str1) - strlen(str2), str2) != 0)
    printf("String %s does not end with string %s\n", str1, str2);
  else {
    char *ptr = strchr(str1, 'A');
    while (ptr != NULL) {
      printf("Found match at index: %d\n", ptr - str1);
      ptr++;
      ptr = strstr(ptr, "a");
    }
  }

  return 0;
}