#include <stdio.h>
#include <stdlib.h>

void interp_string(char *output, const char *format, ...) {
  va_list args;
  va_start(args, format);
  vsnprintf(output, sizeof(output), format, args);
  va_end(args);
}

int main() {
  char output[100];
  char txt[] = "little";
  interp_string(output, "Mary had a %s lamb", txt);
  printf("%s\n", output);
  return 0;
}