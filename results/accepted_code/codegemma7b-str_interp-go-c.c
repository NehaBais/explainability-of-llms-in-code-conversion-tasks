#include <stdio.h>
#include <string.h>

int main() {
  const char *str = "Mary had a %s lamb";
  const char *txt = "little";

  char out[256];
  snprintf(out, sizeof(out), str, txt);

  printf("%s\n", out);

  return 0;
}