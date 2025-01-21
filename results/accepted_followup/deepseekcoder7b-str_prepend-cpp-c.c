#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void prepend(char *str, const char *pre) {
  size_t len_pre = strlen(pre);
  size_t len_str = strlen(str);

  char *buf = malloc(len_pre + len_str + 1);
  if (buf == NULL) {
    printf("Error: Unable to allocate memory.");
    exit(1); // Or return in production code, depending on what's appropriate.
  }

  memcpy(buf, pre, len_pre);
  memcpy(buf + len_pre, str, len_str + 1);

  printf("Prepended string: %s\n", buf);

  free(buf);
}

int main() {
  char str[] = "my string";
  const char *pre = "prepended to";

  prepend(str, pre);

  return 0;
}