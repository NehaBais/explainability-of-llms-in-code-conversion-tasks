#include <stdio.h>

int main() {
  char str[] = "Mary had a %s lamb";
  char txt[] = "little";
  char out[100]; // Assuming the output string won't exceed 100 characters

  sprintf(out, str, txt);
  printf("%s\n", out);

  return 0;
}