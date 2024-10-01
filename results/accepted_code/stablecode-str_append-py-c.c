#include <stdio.h>
#include <string.h>

int main() {
  char str[15] = "123456";
  char append_str[] = "9!";

  // Append operation in C
  strcat(str, append_str);

  printf("The new string is: %s\n", str);

  return 0;
}