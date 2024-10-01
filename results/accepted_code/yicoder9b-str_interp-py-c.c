#include <stdio.h>

int main() {
  char extra[] = "little";
  char new_str[50]; // size should be large enough for the resulting string
  sprintf(new_str, "Mary had a %s lamb.", extra);
  printf("%s\n", new_str);
  return 0;
}