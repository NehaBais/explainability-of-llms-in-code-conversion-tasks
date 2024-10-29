#include <stdio.h>
#include <string.h>

int main() {
  char s[] = "World"; // Create a string variable equal to any text value.

  char hello[] = "Hello "; // String literal we want to prepend.

  /* Prepend the second string (hello) to the first string (s). */
  sprintf(s, "%s%s", hello, s);

  printf("%s\n", s); // Output: Hello World

  return 0;
}