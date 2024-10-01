#include <stdio.h>
#include <string.h>

void match(char *first, char *second) {
  printf("1. %s starts with %s: %d\n", first, second,
         strstr(first, second) == first);
  int i = strstr(first, second) - first;
  printf("2. %s contains %s: %d, ", first, second, i >= 0);
  if (i >= 0) {
    printf("at location %d\n", i);
    char *start = strstr(first + i + 1, second);
    while (start) {
      printf("and at location %ld ", start - first);
      start = strstr(start + 1, second);
    }
  }
  printf("3. %s ends with %s: %d\n", first, second,
         strcmp(first + (strlen(first) - strlen(second)), second) == 0);
}

int main() {
  match("abracadabra", "abr");
  return 0;
}