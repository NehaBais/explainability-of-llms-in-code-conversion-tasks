#include <stdio.h>
#include <string.h>

char *substring(char *str, int n, int m) {
  if (n >= 0 && n + m <= strlen(str)) {
    return &str[n];
  }
  return NULL;
}

char *substring(char *str, int n) {
  if (n >= 0 && n < strlen(str)) {
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

char *substring(char *str, char c, int m) {
  char *pos = strchr(str, c);
  if (pos != NULL && pos + m < strlen(str)) {
    return &pos[0];
  }
  return NULL;
}

char *substring(char *str, const char *sub, int m) {
  char *pos = strstr(str, sub);
  if (pos != NULL && pos + m < strlen(str)) {
    return &pos[0];
  }
  return NULL;
}