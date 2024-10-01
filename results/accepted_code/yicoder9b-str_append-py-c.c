#include <stdio.h>
#include <string.h>

int main() {
  char str1[50] = "12345678"; // Enough space for the original string plus
                              // additional content
  char *str2 = "9!";          // String literal to append
  strcat(str1, str2);         // Append str2 to the end of str1

  printf("%s\n", str1); // Prints: 123456789!

  return 0;
}