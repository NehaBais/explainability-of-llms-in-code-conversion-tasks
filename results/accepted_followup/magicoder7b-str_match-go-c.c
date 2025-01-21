#include <stdio.h>
#include <string.h>

void match(char *first, char *second) {
  printf("1. %s starts with %s: %d\n", first, second,
         strncmp(first, second, strlen(second)) == 0);
  size_t len = strlen(first);
  size_t pos = 0;
  while ((pos = strstr(first + pos, second)) != NULL) {
    printf("2. %s contains %s: %d at location %ld\n", first, second, 1,
           (long)(pos - first));
    ++pos;
  }
  printf("3. %s ends with %s: %d\n", first, second,
         strcmp(second, first + len - strlen(second)) == 0);
}

int main() {
  match("abracadabra", "abr");
  return 0;
}