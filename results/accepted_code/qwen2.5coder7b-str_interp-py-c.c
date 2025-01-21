#include <stdio.h>

int main() {
  char *extra = "little";
  char new_str[100];

  // Use snprintf for safety (to avoid buffer overflow)
  snprintf(new_str, sizeof(new_str), "Mary had a %s lamb.", extra);

  printf("%s\n", new_str);

  return 0;
}