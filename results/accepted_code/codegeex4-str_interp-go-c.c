#include <stdio.h>

int main() {
  char *str = "Mary had a %s lamb";
  char txt[] = "big";

  printf(str, txt);

  return 0;
}