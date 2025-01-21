#include <stdio.h>
#include <stdlib.h> // Added this line
#include <string.h>

char *Substring(const char *str, int n, int m) {
  if (n + m > strlen(str)) {
    m = strlen(str) - n;
  }

  int length = n + m + 1;
  char *result = malloc(length * sizeof(char)); // Updated this line
  memcpy(&result[0], &str[n], m);
  result[length - 1] = '\0';

  return result;
}

// Rest of the code remains unchanged