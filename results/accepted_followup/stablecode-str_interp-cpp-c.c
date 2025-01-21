#include <stdio.h>
#include <string.h>

int main() {
  char original[] = "Mary had a X lamb.";
  char toBeReplaced[] = "X";
  char replacement[] = "little";

  // Calculate the length of the new string, accounting for null terminator
  size_t newStringLength =
      strlen(original) - strlen(toBeReplaced) + strlen(replacement);

  // Allocate memory for the new string
  char *newString = malloc(newStringLength + 1)); // +1 for null terminator

  // Perform the string replacement using strreplace function
  strreplace(original, toBeReplaced, replacement, &newString);

  // Print the final replaced string
  printf("String after replacement: %s\n", newString);

  // Free the allocated memory for the new string
  free(newString);

  return 0;
}