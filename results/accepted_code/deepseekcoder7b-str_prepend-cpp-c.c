#include <stdio.h>
#include <string.h>

void prepend(char *str, const char *pre) {
  // Find lengths of both strings
  size_t len_pre = strlen(pre);
  size_t len_str = strlen(str);

  // Setup new string with enough space
  char *buf = malloc(len_pre + len_str + 1); // +1 for the null terminator
  if (buf == NULL) {
    printf("Error: Unable to allocate memory.");
    exit(1); // Or return in production code, depending on what's appropriate.
  }

  // Copy pre string first
  memcpy(buf, pre, len_pre);

  // Followed by original string
  memcpy(buf + len_pre, str,
         len_str + 1); // +1 to copy the null terminator as well

  printf("Prepended string: %s\n", buf);

  free(buf); // Don'<｜begin▁of▁sentence｜>t forget to free!
}

int main() {
  char str[] = "my string";
  const char *pre = "prepended to";

  prepend(str, pre);

  return 0;
}