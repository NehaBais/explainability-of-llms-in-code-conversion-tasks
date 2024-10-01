#include <stdio.h>
#define SIZE 100

int main() {
  char str[SIZE] = "12345678";
  int n;

  // Add string literal to the end of the variable
  sprintf(str + strlen(str), "%s", "9!");

  printf("%s\n",
         str); // Print the contents of the variable after append operation.

  return 0;
}