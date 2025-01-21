#include <stdio.h>
#include <string.h>

int main() {
  char hello[50] = "Hello world"; // Array to store the string
  strcat(hello, "!!!!");          // Append another string literal

  printf("%s\n",
         hello); // Show the contents of the variable after the append operation

  return 0;
}