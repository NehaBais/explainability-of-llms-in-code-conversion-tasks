#include <stdio.h>
#include <string.h>

int main() {
  char s[] = "abc文字化けdef";
  int n = 2, m = 3;

  // Print the substring starting from index n with length m
  if (n + m > strlen(s)) {
    printf("Error: Substring out of range\n");
    return -1; // or return an error code
  }

  for (int i = 0; i < m; ++i) {
    printf("%c", s[n + i]);
  }
  printf("\n");

  // Print all characters starting at index n
  if (n >= strlen(s)) {
    printf("Error: Substring out of range\n");
    return -1; // or return an error code
  }

  for (int i = 0; i < strlen(s) - n; ++i) {
    printf("%c", s[n + i]);
  }
  printf("\n");

  // Print the substring without the last character of the string
  if (strlen(s) <= 1) {
    printf("Error: Substring out of range\n");
    return -1; // or return an error code
  }
  for (int i = 0; i < strlen(s) - 1; ++i) {
    printf("%c", s[i]);
  }
  printf("\n");

  // Print the substring starting with 'b' with length m
  if (strchr(&s[0], 'b') == NULL || m > strlen(s)) {
    printf("Error: Substring out of range or 'b' not found in string\n");
    return -1; // or return an error code
  }

  for (int i = 0; i < m; ++i) {
    if ((strchr(&s[0], 'b') + i) % m == 0) {
      printf("%c", s[(strchr(&s[0], 'b')) + i]);
    }
  }
  printf("\n");

  // Print the substring starting with 'け' with length m
  if (m > strlen(s) || !(strncmp(&s[0], "け", 2))) {
    printf("Error: Substring out of range or 'け' not found in string\n");
    return -1; // or return an error code
  }

  for (int i = 0; i < m; ++i) {
    if ((strncmp(&s[0], "け", 2) + i) % m == 0) {
      printf("%c", s[(strncmp(&s[0], "け", 2)) + i]);
    }
  }
  printf("\n");

  return 0; // or return an error code if necessary
}