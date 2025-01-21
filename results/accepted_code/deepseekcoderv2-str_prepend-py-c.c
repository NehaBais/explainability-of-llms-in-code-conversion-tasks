#include <stdio.h>
#include <string.h>

int main() {
  char s[] = "12345678";
  char prepended_s[] = "0"; // Define the string to be prepended

  // Calculate the length of the strings
  int len_s = strlen(s);
  int len_prepended_s = strlen(prepended_s);

  // Create a new array to hold the result after concatenation
  char result[len_s + len_prepended_s + 1];

  // Copy the prepended string to the beginning of the result array
  strcpy(result, prepended_s);

  // Concatenate the original string to the result array
  strcat(result, s);

  // Print the concatenated result
  printf("%s\n", result);

  return 0;
}