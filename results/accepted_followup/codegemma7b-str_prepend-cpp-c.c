#include <stdio.h>
#include <string.h>

int main() {
  char *str1 = "prepended to";
  char *str2 = "my string";

  char *prepended = strcat(str1, str2);

  printf("%s\n", prepended);

  return 0;
}