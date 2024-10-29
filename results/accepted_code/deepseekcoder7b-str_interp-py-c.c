#include <stdio.h>

int main() {
  char extra[] = "little";
  char new_str[30] = ""; // An empty string in C should have enough space to
                         // contain the interpolated result

  sprintf(new_str, "Mary had a %s lamb.",
          extra); // Equivalent of Python's f-string interpolation

  printf("%s\n", new_str);

  return 0;
}