#include <stdio.h>
#include <string.h> // Include string.h for function prototypes
#define MAX_SIZE 100

int main() {
  char s[MAX_SIZE] = "hello";
  printf("%s\n", s);

  char s2[MAX_SIZE];
  strcpy(s2, s);          // Copy 's' into 's2'
  strcat(s2, " literal"); // Append string literal to 's2'
  printf("%s\n", s2);

  return 0;
}