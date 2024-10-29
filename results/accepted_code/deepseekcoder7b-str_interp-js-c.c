#include <stdio.h>
#include <string.h>

int main() {
  char original[] = "Mary had a X lamb";
  char little[] = "big";

  // Find and replace 'X' with 'little' in the original string
  for (int i = 0; i < 4; ++i) {
    if (original[9 + i] == 'X') {
      strncpy(&original[9], little, 4);
      break;
    }
  }

  printf("%s", original); // prints "Mary had a big lamb"
  return 0;
}