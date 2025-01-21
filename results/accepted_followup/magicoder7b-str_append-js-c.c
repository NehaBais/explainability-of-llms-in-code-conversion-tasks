#include <stdio.h>
#include <string.h> // Include string library
#define MAX_SIZE 256

int main() {
  char s1[MAX_SIZE] = "Hello";
  strncat(s1, ", World!", MAX_SIZE); // append string literal to s1
  printf("%s\n", s1);                // print the contents of s1
  return 0;
}