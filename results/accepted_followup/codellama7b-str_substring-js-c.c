#include <stdio.h>
#include <string.h>

int main() {
  char str[8] = "abcdefg";
  int n = 3, m = 4;
  strncpy(str, n, m);
  printf("%s\n", str); // => "cdefgh"
  return 0;
}