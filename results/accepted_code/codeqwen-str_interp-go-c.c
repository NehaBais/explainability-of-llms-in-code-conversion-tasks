#include <stdio.h>
#include <string.h>

int main() {
  char str[] = "Mary had a %s lamb";
  char txt[] = "little";
  char out[100]; // assuming that the interpolated string will not be longer
                 // than 99 characters (including null terminator)
  snprintf(out, sizeof(out), str, txt);
  printf("%s\n", out);
  return 0;
}