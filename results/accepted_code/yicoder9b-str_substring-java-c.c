#include <stdlib.h>
#include <string.h>

char *Substring(const char *str, int n, int m) {
  if (n + m > strlen(str))
    return NULL;
  char *result = malloc(sizeof(char) * (m + 1));
  strncpy(result, str + n, m);
  *(result + m) = '\0';
  return result;
}

char *Substring(const char *str, int n) {
  if (n > strlen(str))
    return NULL;
  int len = strlen(str) - n;
  char *result = malloc(sizeof(char) * (len + 1));
  strcpy(result, str + n);
  return result;
}

char *Substring(const char *str) {
  if (strlen(str) == 0)
    return NULL;
  int len = strlen(str) - 1;
  char *result = malloc(sizeof(char) * (len + 1));
  strncpy(result, str, len);
  *(result + len) = '\0';
  return result;
}

char *Substring(const char *str, const char c, int m) {
  int pos = (int)strchr(str, c) - str;
  if (pos == -1 || pos + m > strlen(str))
    return NULL;
  char *result = malloc(sizeof(char) * (m + 1));
  strncpy(result, str + pos, m);
  *(result + m) = '\0';
  return result;
}

char *Substring(const char *str, const char *sub, int m) {
  int pos = (int)(strstr(str, sub) - str);
  if (pos == -1 || pos + m > strlen(str))
    return NULL;
  char *result = malloc(sizeof(char) * (m + 1));
  strncpy(result, str + pos, m);
  *(result + m) = '\0';
  return result;
}