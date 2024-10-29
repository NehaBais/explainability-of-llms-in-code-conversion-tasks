#include <stdio.h>
#include <string.h>

int main() {
  char string[] = "abc";
  printf("%s\n", string);

  // strcat function to append the string
  strcat(string, "def");

  printf("%s\n", string);
}