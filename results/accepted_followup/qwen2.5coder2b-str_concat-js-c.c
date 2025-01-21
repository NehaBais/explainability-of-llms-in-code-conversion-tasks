#include <stdio.h>
#include <string.h>

int main() {
  char s[] = "hello";
  char result[50];

  strcpy(result, s);
  strcat(result, " there!");

  printf("%s\n", result);

  return 0;
}