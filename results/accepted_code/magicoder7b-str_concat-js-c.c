#include <stdio.h>
#define SIZE 50 // assuming that it's enough for your strings

int main() {
  char s[SIZE] = "hello";
  char concat[SIZE];

  strcpy(concat, s);
  strcat(concat, " there!");

  printf("Original string: %s\n", s);
  printf("Concatenated string: %s\n", concat);

  return 0;
}