#include <stdio.h>

int main() {
  char str[100] = "Mary had a %s lamb";
  char txt[] = "little";

  snprintf(str, sizeof(str), str, txt);
  printf("%s\n", str);

  return 0;
}