#include <stdio.h>
#define extra "big" // Defined values, similar to variables in Python
#define original_string "Mary had a %s lamb."

int main() {
  char new_str[100];

  // Interpolation or string formatting like Python's f-string feature
  sprintf(new_str, original_string, extra);
  printf("%s", new_str);
  return 0;
}