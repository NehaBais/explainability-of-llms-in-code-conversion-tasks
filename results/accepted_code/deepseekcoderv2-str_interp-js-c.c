#include <stdio.h>
#include <string.h>

int main() {
  char original[] = "Mary had a X lamb";
  char little[] = "little";
  char replaced[100]; // Make sure this is large enough to hold the result

  // Find the length of the string and the substring to be replaced
  int len = strlen(original);
  int sublen = 2; // Length of "X"

  // Copy the original string to the replaced string
  strcpy(replaced, original);

  // Loop through the replaced string to find the position of "X"
  for (int i = 0; i <= len - sublen; i++) {
    if (strncmp(&original[i], "X", sublen) == 0) {
      // Replace "X" with little
      strcpy(&replaced[i], little);
      break;
    }
  }

  printf("Original: %s\n", original);
  printf("Replaced: %s\n", replaced);

  return 0;
}