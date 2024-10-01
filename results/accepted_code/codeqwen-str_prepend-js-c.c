#include <stdio.h>
#include <string.h>

int main() {
  char s[50] = ", World";
  strcpy(s + strlen(s),
         "Hello"); // Copies the string "Hello" to s starting from the next
                   // character of current length of s.
  printf("%s", s);
  return 0;
}