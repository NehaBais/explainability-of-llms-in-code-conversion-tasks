#include <stdio.h>
#include <string.h> // Include string.h here
#define SIZE 50

int main() {
  char s[SIZE] = "hello";
  char concat[SIZE];

  strcpy(concat, s); // Use the function prototype provided in string.h
  strcat(concat, " there!");

  printf("Original string: %s\n", s);
  printf("Concatenated string: %s\n", concat);

  return 0;
}