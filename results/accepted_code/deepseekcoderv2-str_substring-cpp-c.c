#include <stdio.h>
#include <string.h>

void print_substr(char *s, int start, int len) {
  if (start + len > strlen(s)) {
    printf("Invalid substring length\n");
    return;
  }
  for (int i = 0; i < len && s[start + i] != '\0'; i++) {
    putchar(s[start + i]);
  }
  printf("\n");
}

void print_substr_by_char(char *s, char c, int len) {
  int start = strchr(s, c) - s;
  if (start < 0 || start >= strlen(s)) {
    printf("Character not found\n");
    return;
  }
  print_substr(s, start, len);
}

void print_substr_by_sub(char *s, char *sub, int len) {
  int start = strstr(s, sub) - s;
  if (start < 0 || start >= strlen(s)) {
    printf("Substring not found\n");
    return;
  }
  print_substr(s, start, len);
}

int main() {
  char *s = "0123456789";

  int n = 3;
  int m = 4;
  char c = '2';
  char sub[] = "456";

  print_substr(s, n, m);
  print_substr(s, n, strlen(s) - n);
  print_substr(s, 0, strlen(s) - 1);
  print_substr_by_char(s, c, m);
  print_substr_by_sub(s, sub, m);

  return 0;
}