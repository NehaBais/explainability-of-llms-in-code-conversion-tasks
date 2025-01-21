#include <stdio.h>
#include <string.h>

int main() {
  char s[20] = "hello";

  printf("%s", s); // Prints the value of variable s

  char another_string[] = " there!";

  // Concatenate two strings.
  strcat(s, another_string);

  printf("Final String: %s\n", s);

  return 0;
}