#include <stdio.h>
#include <string.h>

int main() {
  char extra[] = "little";
  char new_str[256]; /* assuming the maximum length of string */
  sprintf(new_str, "Mary had a %s lamb.",
          extra); /* sprintf function to print formatted strings */
  printf("%s\n", new_str);
  return 0;
}