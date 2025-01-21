#include <stdio.h>
#include <string.h>

int main() {
  char s[] =
      "world!"; // Create a character array (string) initialized with "world!".
  char prepend[] = "Hello, "; // Define the string to be prepended.

  // Calculate the length needed for the new string including the null
  // terminator.
  int len_prepend = strlen(prepend);
  int len_s = strlen(s);
  int total_len = len_prepend + len_s + 1; // +1 for the null terminator.

  // Create a new character array to hold the result after prepending.
  char result[total_len];

  // Copy the prepended string to the beginning of the result array.
  strcpy(result, prepend);

  // Append the original string to the result array.
  strcat(result, s);

  printf("%s\n", result); // Print the final concatenated string.

  return 0;
}