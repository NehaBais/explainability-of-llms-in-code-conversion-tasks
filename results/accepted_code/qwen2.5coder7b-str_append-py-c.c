#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char *str = (char *)malloc(
      9 * sizeof(char));   // Allocate enough space to hold "12345678"
  strcpy(str, "12345678"); // Copy the string into str

  char *appendStr = "!"; // The string to append
  int newLength =
      strlen(str) +
      strlen(appendStr); // Calculate the new length of str after appending

  // Allocate more space for the appended string
  char *temp = (char *)realloc(str, (newLength + 1) * sizeof(char));
  if (temp == NULL) {
    free(str);
    fprintf(stderr, "Memory reallocation failed\n");
    return 1;
  }
  str = temp;

  strcat(str, appendStr); // Append the string to str

  printf("%s\n", str); // Print the final string after appending
  free(str);           // Free the allocated memory

  return 0;
}