#include <stdio.h>

int main() {
  char s[] = "hello";
  printf("%s there!\n", strcat(s, " there!"));
  return 0;
}