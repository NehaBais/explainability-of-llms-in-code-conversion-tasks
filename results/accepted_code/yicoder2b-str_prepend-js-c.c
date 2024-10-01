#include <stdio.h>

int main() {
  char s[100] = ", World"; // Initial string
  const char *prefix = "Hello";

  // Append prefix to the string
  strcpy(s + strlen(prefix), prefix);

  printf("%s\n", s);
  return 0;
}