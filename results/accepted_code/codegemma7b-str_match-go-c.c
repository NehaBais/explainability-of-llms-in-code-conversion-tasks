#include <stdio.h>
#include <string.h>

int match(const char *first, const char *second) {
  printf("1. %s starts with %s: %d\n", first, second,
         strncmp(first, second, strlen(second)) == 0);

  int i = strstr(first, second) - first;
  printf("2. %s contains %s: %d\n", first, second, i >= 0);
  if (i >= 0) {
    printf("2.1. at location %d\n", i);
    int start = i + 1;
    while ((i = strstr(first + start, second) - first) >= 0) {
      printf("2.2. at location %d\n", start + i);
      start += i + 1;
    }
    printf("2.2. and that's all\n");
  }

  printf("3. %s ends with %s: %d\n", first, second,
         strncmp(first + strlen(first) - strlen(second), second,
                 strlen(second)) == 0);

  return 0;
}

int main() {
  match("abracadabra", "abr");
  return 0;
}