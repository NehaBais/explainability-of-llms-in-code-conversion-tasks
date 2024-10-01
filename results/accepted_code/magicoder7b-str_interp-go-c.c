#include <stdio.h>
#define SIZE 256

int main() {
  char str[SIZE] = "Mary had a %s lamb";
  char txt[SIZE] = "little";
  char out[SIZE];

  sprintf(out, str, txt);
  printf("%s", out);

  return 0;
}