#include <stdio.h>
#include <string.h>

char *Substring(char *str, int n, int m) {
  int len = strlen(str);
  if (n >= len || (n + m) > len) {
    printf("Invalid range\n");
    return NULL;
  }

    char* subStr = malloc((m + 1)*sizeof(char)));
    memcpy(subStr, &str[n], m * sizeof(char)));
    subStr[m] = '\0'; // null terminate the string

    return subStr;
}