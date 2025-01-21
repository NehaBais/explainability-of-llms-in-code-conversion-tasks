#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char *hello = (char *)malloc(
      13 * sizeof(char)); // Allocate memory for "Hello world" + null terminator
  strcpy(hello,
         "Hello world"); // Copy the string literal to the allocated memory

  // Append "!!!!" to the string
  int new_length = strlen(hello) + 4; // Calculate the new length of the string
  hello = (char *)realloc(
      hello, new_length * sizeof(char)); // Reallocate memory for the new string
  strcat(
      hello,
      "!!!!"); // Append the string literal to the end of the allocated memory

  // Print the contents of the variable after the append operation
  printf("%s\n", hello);

  free(hello); // Free the allocated memory
  return 0;
}