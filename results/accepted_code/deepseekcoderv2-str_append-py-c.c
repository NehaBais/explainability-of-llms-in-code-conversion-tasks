#include <stdio.h>
#include <string.h>

int main() {
  char str[] = "12345678";
  char *str2 = "9!";
  strcat(str, str2);
  printf("%s\n", str);
  return 0;
}