#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char *s = (char *)malloc(
      20); // Allocate memory for the string with a capacity of 20 characters
  strcpy(s, "World"); // Copy "World" into the string variable 's'

  // Prepend "Hello " to the string 's'
  char hello[] = "Hello ";
  int helloLen = strlen(hello);
  int sLen = strlen(s);
  memmove(
      s + helloLen, s,
      sLen +
          1); // Move the existing characters in 's' to make space for "Hello "
  memcpy(s, hello, helloLen); // Copy "Hello " into the beginning of 's'

  printf("%s\n", s); // Print the string variable
  free(s);           // Free the allocated memory

  return 0;
}