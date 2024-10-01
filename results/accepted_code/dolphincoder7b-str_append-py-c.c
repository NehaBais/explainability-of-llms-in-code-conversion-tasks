#include <stdio.h>
#include <string.h>
int main() {
  char str[20] = "12345678";
  strcat(str, "9!");
  printf("%s\n", str);
  return 0;
}