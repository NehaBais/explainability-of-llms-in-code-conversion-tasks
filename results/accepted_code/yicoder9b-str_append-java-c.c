#include <stdio.h>
#include <string.h>

int main() {
  char string[20] =
      "abc"; // 20 is chosen as the buffer size to prevent overflow
  printf("%s\n", string);

  strcat(string, "def");
  printf("%s\n", string);

  return 0;
}