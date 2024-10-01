#include <ctype.h>
#include <stdio.h>
#include <string.h>

// Function to convert string to lowercase (for simplicity)
void str_tolower(char *str) {
  int i;
  for (i = 0; str[i]; ++i)
    str[i] = tolower(str[i]);
}

// Main function to handle different tasks
void string_operations(const char *str, int n, int m, const char findStr[],
                       size_t findStrLen) {
  size_t len;
  char substr1[m + 1];
  char substr2[n + 1];
  // Task 1
  substrcpy(substr1, str + n, m);
  printf("Task 1: %s\n", substr1);
  // Task 2
  len = strlen(str) - n;
  if (m > len)
    m = len;
  substrcpy(substr1, str + n, m);
  printf("Task 2: %s\n", substr1);
  // Task 3
  substrcpy(substr1, str, strlen(str) - n - 1);
  printf("Task 3: %s\n", substr1);
  // Task 4
  substrcpy(substr2, str + n, m);
  if (m <= strlen(findStr)) {
    int i;
    for (i = 0; i < m; ++i)
      if (strcmp(substr2, findStr + i) == 0) {
        printf("Task 4: %s\n", substr1);
        break;
      }
  } else {
    printf("Task 4: No match found.\n");
  }
  // Task 5
  if (n < strlen(findStr)) {
    substrcpy(substr2, str + n, m);
    printf("Task 5: %s\n", substr2);
  } else {
    printf("Task 5: No match found.\n");
  }
}

// Helper function to copy the substring to another string
void substrcpy(char *dest, const char *src, size_t len) {
  while ((*dest++ = *src++) && --len)
    ;
}

int main() {
  const char *str = "abcdefgh";
  int n = 2;
  int m = 3;
  const char findStr[] = "bc";
  size_t findStrLen = sizeof(findStr) / sizeof(char);
  string_operations(str, n, m, findStr, findStrLen);
  return 0;
}