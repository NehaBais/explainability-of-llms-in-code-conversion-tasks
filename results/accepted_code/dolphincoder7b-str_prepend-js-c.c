#include <stdio.h>
#include <string.h>

int main() {
  char s[] =
      ", World"; // No built-in prepend so we need to use strcpy and strcat
  char new_s[] = "Hello";

  strcat(new_s, s); // Concatenate the strings
  printf("%s\n", new_s);

  return 0;
}