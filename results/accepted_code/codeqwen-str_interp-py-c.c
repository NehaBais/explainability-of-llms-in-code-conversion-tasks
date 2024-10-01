#include <stdio.h>

int main() {
  char extra[] = "little";
  char original[] = "Mary had a %s lamb.";
  char new_str[100];

  sprintf(new_str, original, extra);

  printf("%s", new_str);

  return 0;
}