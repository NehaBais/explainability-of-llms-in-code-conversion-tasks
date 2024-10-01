#include <stdio.h>
#include <string.h>

int main() {
  char str[] = "Mary had a %s lamb.";
  char txt[] = "little";
  char out[50];

  sprintf(out, str, txt);
  printf("%s\n", out);

  return 0;
}