#include <stdio.h>
#include <stdlib.h>

int main() {
  char *str = "Mary had a %s lamb";
  char *txt = "little";
  printf(str, txt);
  return 0;
}