#include <stdio.h>
#include <string.h>

int startswith(char *str1, char *str2);
int contains(char *str1, char *str2);
int endswith(char *str1, char *str2);
int find_all(char *str, char *sub, int index[]);

int main() {
  printf("%d\n", startswith("abcd", "ab")); // returns True
  printf("%d\n", endswith("abcd", "zn"));   // returns False
  printf("%d\n", contains("abab", "bb"));   // returns False
  printf("%d\n", contains("abab", "ab"));   // returns True

  char index[20];
  int count = find_all("abab", "ab", index);
  printf("%d", count);
}

int startswith(char *str1, char *str2) { return strstr(str1, str2) == str1; }

int endswith(char *str1, char *str2) {
  int len1 = strlen(str1), len2 = strlen(str2);
  if (len2 > len1)
    return 0;
  return strcmp(str1 + len1 - len2, str2) == 0;
}

int contains(char *str1, char *str2) { return strstr(str1, str2) != NULL; }

int find_all(char *str, char *sub, int index[]) {
  int len = strlen(sub), i, count = 0;

  for (i = 0;; i++) {
    char *p = strstr(str + i, sub);
    if (!p)
      break;
    index[count++] = p - str;
    i += len - 1;
  }
  return count;
}