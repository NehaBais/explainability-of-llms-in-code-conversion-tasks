#include <stdio.h>

int main() {
  char str[] = "Mary had a %s lamb";
  char name[] = "Mary";
  char adj[] = "little";

  printf(str, adj);                      // Output: Mary had a little lamb
  printf("%s had a %s lamb", name, adj); // Output: Mary had a little lamb
  return 0;
}