#include <stdio.h>

int main() {
  char str[] = "Mary had a %s lamb";
  char txt[] = "little";
  snprintf(out, sizeof(out), str, txt);
  printf("%s", out);
  return 0;
}