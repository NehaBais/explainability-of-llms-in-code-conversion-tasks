#include <stdio.h>

int main() {
  char str[100] = "Mary had a %s lamb";
  char txt[] = "little";
  snprintf(str, sizeof(str)), printf(str, txt);

  return 0;
}