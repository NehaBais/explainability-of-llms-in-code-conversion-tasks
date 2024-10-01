#include <stdio.h>
#define SIZE 100

int main() {
  char s[SIZE] = "12345678";
  strncat(s, "0", SIZE); // by concatenation
  printf("%s\n", s);

  return 0;
}