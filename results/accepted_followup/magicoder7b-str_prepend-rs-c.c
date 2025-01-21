#include <stdio.h>
#include <string.h> // Include string header file
#define MAX_LEN 1024

int main() {
  char s[MAX_LEN] = "World";
  int len = strlen(s);

  for (int i = len - 1; i > 5; --i) {
    s[i + 6] = s[i];
  }

  for (int i = 0; i < 6; ++i) {
    s[i] = 'H';
    s[i + 1] = 'e';
    s[i + 2] = 'l';
    s[i + 3] = 'l';
    s[i + 4] = 'o';
    s[i + 5] = ' ';
  }

  printf("%s", s);

  return 0;
}