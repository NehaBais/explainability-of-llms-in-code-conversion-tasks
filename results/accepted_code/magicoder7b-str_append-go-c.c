#include <stdio.h>
#include <string.h>

int main() {
  char s[100];
  strcpy(s, "foo"); // Appending string literal 'foo' to variable 's'.
  strncat(s, "bar",
          sizeof(s) - strlen(s) -
              1);  // Appending string literal 'bar' to variable 's'.
  printf("%s", s); // Printing the contents of variable 's'.
  return 0;
}