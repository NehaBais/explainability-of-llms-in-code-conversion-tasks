#include <stdio.h>
#include <string.h>

int main() {
  char s[] = "abc文字化けdef";
  int n = 2, m = 3;

  // Print 3 characters starting at index 2 (c文字)
  for (int i = n; i < n + m; ++i)
    printf("%c", s[i]);
  printf("\n");

  // Print all characters starting at index 2 (c文字化けdef)
  int j = 0;
  while (s[j + n] != '\0') {
    printf("%c", s[j + n]);
    ++j;
  }
  printf("\n");

  // Print all characters except the last (abc文字化けde)
  int len = strlen(s);
  for (int i = 0; i < len - 1; ++i)
    printf("%c", s[i]);
  printf("\n");

  // Print 3 characters starting with 'b' (bc文)
  char *pos = strchr(s, 'b');
  if (!pos) {
    printf("Character 'b' not found.\n");
    return -1;
  }
  for (int i = pos - s + 1; i < pos - s + m + 1; ++i)
    printf("%c", s[i]);
  printf("\n");

  // Print 3 characters starting with "けd" (けde)
  char *spos = strstr(s, "けd");
  if (!spos) {
    printf("Substring 'けd' not found.\n");
    return -1;
  }
  for (int i = spos - s + 1; i < spos - s + m + 1; ++i)
    printf("%c", s[i]);
  printf("\n");

  return 0;
}