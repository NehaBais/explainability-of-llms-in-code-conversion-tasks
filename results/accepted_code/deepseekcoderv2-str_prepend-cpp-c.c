#include <stdio.h>
#include <string.h>

int main() {
  char *myStrings[] = {"prepended to", "my string"};
  int numStrings = sizeof(myStrings) / sizeof(myStrings[0]);
  char prepended[100] = ""; // Assuming the maximum length of the result will
                            // not exceed 100 characters

  for (int i = 0; i < numStrings; i++) {
    strcat(prepended, myStrings[i]);
    if (i < numStrings - 1) {
      strcat(prepended,
             " "); // Add a space between strings, but not after the last one
    }
  }

  printf("%s\n", prepended);
  return 0;
}