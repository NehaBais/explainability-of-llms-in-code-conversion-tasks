#include <stdio.h>
#include <string.h>

char *substring(char *str, int n) {
  if (n >= 0 && n + 1 <= strlen(str)) {
    return &str[n];
  }
  return NULL;
}

char *substring(char *str, int n, int m) {
  if (n >= 0 && n + m < strlen(str)) {
    return &str[n];
  }
  return NULL;
}

char *substring(char *str) {
  if (strlen(str) > 1) {
    return &str[strlen(str) - 2];
  }
  return NULL;
}