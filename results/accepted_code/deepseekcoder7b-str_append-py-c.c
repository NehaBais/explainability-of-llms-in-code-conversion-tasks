#include <stdio.h>
#include <string.h>

int main() {
  char str[] = "12345678"; // Creating a string variable and initializing it
                           // with some value
  strcat(str,
         "9!"); // Appending another string to our previously created string
  printf("%s\n", str); // Print the new string

  return 0;
}