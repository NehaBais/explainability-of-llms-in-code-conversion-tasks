#include <stdio.h>
#include <string.h>

int main() {
  char s[] = "abc文字化けdef";
  size_t n = 2;
  size_t m = 3;

  // Print 3 characters starting at index 2 (c文字)
  printf("%.*s\n", (int)m, s + n); // C does not support arbitrary Unicode
                                   // manipulation out of the box

  // Print all characters starting at index 2 (c文字化けdef)
  printf("%s\n", s + n);

  // Print all characters except the last (abc文字化けde)
  s[strlen(s) - 1] = '\0'; // C-strings are null-terminated. We replace the last
                           // char with a null to terminate the string.
  printf("%s\n", s);

  // Print 3 characters starting with 'b' (bc文) - assuming only single byte
  // characters for simplicity
  char *cpos = strchr(s, 'b'); // find position of character b in the string
  if (cpos) {
    printf("%.*s\n", (int)m, cpos);
  }

  // Print 3 characters starting with "けd" (ぱひじ) - assuming only single byte
  // characters for simplicity
  char *spos =
      strstr(s, "けd"); // find position of substring "けd" in the string
  if (spos) {
    printf("%.*s\n", (int)m, spos);
  }

  return 0;
}