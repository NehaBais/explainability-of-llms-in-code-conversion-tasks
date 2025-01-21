#include <stdio.h>
#include <string.h>

int main() {
  char str[] = "abcd";
  char sub_str[] = "ab";

  // Check if first string starts with second string
  int len1 = strlen(str);
  int len2 = strlen(sub_str);

  if (len2 > len1) {
    printf("First string does not start with the second string.\n");
  } else {
    int i, j;
    for (i = 0; i < len2; i++)
      if (str[i] != sub_str[i])
        break;

    if (i == len2)
      printf("First string starts with the second string.\n");
    else
      printf("First string does not start with the second string.\n");
  }

  // Check if first string contains the second string at any location
  char *loc = strstr(str, sub_str);

  if (loc) {
    printf("First string contains the second string.\n");
    while (loc) {
      int index = loc - str;
      printf("Location: %d\n", index);
      loc = strstr(loc + 1, sub_str);
    }
  } else {
    printf("First string does not contain the second string.\n");
  }

  // Check if first string ends with the second string
  if (len2 > len1) {
    printf("First string does not end with the second string.\n");
  } else {
    int i, j;
    for (i = len1 - 1, j = len2 - 1; i >= 0 && j >= 0; i--, j--)
      if (str[i] != sub_str[j])
        break;

    if (i == -1)
      printf("First string ends with the second string.\n");
    else
      printf("First string does not end with the second string.\n");
  }

  return 0;
}