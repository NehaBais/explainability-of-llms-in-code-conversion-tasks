#include <string.h> // Include the string.h header file

int main() {
  char *s1 = "Hello"; // Create a string variable equal to any text value.
  s1 = strcat(s1, ", World!"); // Append the string variable with another string
                               // literal in the most idiomatic way.
  printf("%s\n",
         s1); // Show the contents of the variable after the append operation.
}