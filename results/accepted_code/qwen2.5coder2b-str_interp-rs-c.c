#include <stdio.h>
#include <stdlib.h>

int main() {
  // Using printf with format specifiers for string and variable interpolation
  printf("Mary had a %s lamb.\n", "little");

  // Using snprintf to interpolate values into a buffer
  char name[50];
  char adj[50];
  snprintf(name, sizeof(name), "Mary");
  snprintf(adj, sizeof(adj), "little");
  printf("%s had a %s lamb.\n", name, adj);

  return 0;
}