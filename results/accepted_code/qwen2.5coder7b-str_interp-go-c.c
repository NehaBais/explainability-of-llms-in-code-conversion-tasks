#include <stdio.h>

int main() {
  char str[] = "Mary had a %s lamb";
  char txt[] = "little";
  char out[100]; // Make sure this is large enough to hold the resulting string

  sprintf(out, str, txt);
  printf("%s\n", out);

  return 0;
}