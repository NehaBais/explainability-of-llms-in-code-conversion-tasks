#include <stdio.h>
#include <stdlib.h> // Add this line to include <stdlib.h>
#include <string.h>

// Function to get a substring from the given string
char *Substring(const char *str, int n, int m) {
  size_t substr_len = strlen(str + n);
  if (m != -1) {
    substr_len = m - n;
  }
  char *substr = malloc(substr_len + 1);
  memcpy(substr, str + n, substr_len);
  return substr;
}

int main() {
  printf("%s\n", Substring("Hello World", 3, 7));  // Output: lo Wor
  printf("%s\n", Substring("Hello World", 0, -1)); // Output: Hello World
  printf("%s\n", Substring("Hello World", 2, -1)); // Output: llo World
  printf("%s\n", Substring("Hello World", 0,
                           strlen("Hello World") - 2)); // Output: Hello Worl
  printf("%s\n", Substring("Hello World", "He".length(), 3)); // Output: Hel

  return 0;
}