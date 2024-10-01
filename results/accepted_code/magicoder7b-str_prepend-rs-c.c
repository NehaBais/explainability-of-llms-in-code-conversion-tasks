#include <stdio.h>
#define MAX_LEN 1024

int main() {
  char s[MAX_LEN] = "World"; // Define a string array of size MAX_LEN and assign
                             // the value "World" to it.
  int len = strlen(s);       // Calculate the length of the current string.

  // Prepend the string with the literal string "Hello ".
  for (int i = len - 1; i > 0; --i) {
    s[i + 7] =
        s[i]; // Shift everything forward to make space for the new characters.
  }

  for (int i = 0; i < 6;
       ++i) { // Copy the new string to the first part of our array.
    s[i] = 'H';
    s[i + 1] = 'e';
    s[i + 2] = 'l';
    s[i + 3] = 'l';
    s[i + 4] = 'o';
    s[i + 5] = ' ';
  }

  printf("%s", s); // Print the result.

  return 0;
}