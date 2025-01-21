#include <stdio.h>
#include <string.h> // Include string library
#define SIZE 100

int main() {
  char str[SIZE] = "12345678";
  int n;

  sprintf(str + strlen(str), "%s", "9!");

  printf("%s\n", str);

  return 0;
}