#include <stdio.h>
#include <string.h>

int main() {
  char str[100] = "Mary had a %s lamb";
  char txt[] = "little";
  char out[200];
  sprintf(out, str, txt);
  printf("%s\n", out);
  return 0;
}