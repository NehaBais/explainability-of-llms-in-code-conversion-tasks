#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to get a substring from a string
char *substr(const char *str, int start, int len) {
  int slen = strlen(str);
  if (start >= slen)
    return "";
  if (start + len > slen)
    len = slen - start;
  char *sub = (char *)malloc(len + 1);
  strncpy(sub, str + start, len);
  sub[len] = '\0';
  return sub;
}

int main() {
  const char *s = "abc文字化けdef";
  int n = 2;
  int m = 3;

  // Print 3 characters starting at index 2 (c文字)
  printf("%s\n", substr(s, n, m));

  // Print all characters starting at index 2 (c文字化けdef)
  printf("%s\n", substr(s, n, strlen(s) - n));

  // Print all characters except the last (abc文字化けde)
  int len = strlen(s);
  char *reversed = strdup(s);
  for (int i = 0; i < len / 2; ++i) {
    char temp = reversed[i];
    reversed[i] = reversed[len - 1 - i];
    reversed[len - 1 - i] = temp;
  }
  printf("%s\n", substr(reversed, 1, len - 2));
  free(reversed);

  // Print 3 characters starting with 'b' (bc文)
  char *cpos = strchr(s, 'b');
  if (cpos != NULL) {
    printf("%s\n", substr(s, cpos - s, m));
  }

  // Print 3 characters starting with "けd" (けde)
  char *spos = strstr(s, "けd");
  if (spos != NULL) {
    printf("%s\n", substr(s, spos - s, m));
  }

  return 0;
}