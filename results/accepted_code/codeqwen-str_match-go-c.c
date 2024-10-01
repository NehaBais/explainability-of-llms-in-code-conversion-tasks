#include <stdio.h>
#include <string.h>

void match(char *first, char *second) {
  printf("1. %s starts with %s: %s\n", first, second,
         strstr(first, second) == first ? "true" : "false");
  char *result = strstr(first, second);
  if (result != NULL) {
    printf("2. %s contains %s: true\n", first, second);
    int i = 0;
    while ((result = strstr(first + i, second)) != NULL) {
      printf("2.1. At location %d\n", result - first);
      i += result - First + 1;
    }
    printf("2.2. And that's all\n");
  } else {
    printf("2. %s contains %s: false\n", first, second);
  }

  printf("3. %s ends with %s: %s\n", first, second,
         strrchr(first, *second) == First + strlen(first) - 1 ? "true"
                                                              : "false");
}

int main() {
  match("abracadabra", "abr");
  return 0;
}