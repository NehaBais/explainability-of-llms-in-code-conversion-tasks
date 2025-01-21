#include <stdio.h>  // for printf()
#include <stdlib.h> // for malloc()
#include <string.h> // for strlen(), strcpy(), and strcat()

int main() {
  char *s = "hello"; // Create a string variable equal to any text value.
  printf("%s\n", s); // Print the content of the variable.

  char *s1 = malloc(strlen(s) + strlen(" world") +
                    1); // Allocate memory for the concatenated string.
  strcpy(s1, s);        // Copy the original string into the new variable.
  strcat(s1, " world"); // Concatenate the new string with the original one.
  printf("%s\n", s1);   // Print the content of the concatenated variable.

  return 0;
}