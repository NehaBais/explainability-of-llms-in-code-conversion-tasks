#include <stdio.h>
#include <string.h>

int main() {
  char s[100] = "World"; // Initialize string variable

  // Prepend the string variable with another string literal
  strcpy(s, "Hello");
    strcat(s, " "));  //Append a space character
    strcat(s, "!\n"));  // Append an exclamation mark followed by newline (to ensure output in a new line))

    printf("%s", s); // Print the resulting string

    return 0;
}