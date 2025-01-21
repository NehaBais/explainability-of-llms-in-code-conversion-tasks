#include <stdio.h>
#include <string.h>

int main() {
  char str[] = "12345678";
  strcat(str, "9!");

  printf("%s\n", str);
  return 0;
}