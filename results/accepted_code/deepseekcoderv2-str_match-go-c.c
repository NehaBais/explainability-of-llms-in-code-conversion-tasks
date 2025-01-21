#include <stdio.h>
#include <string.h>

void match(const char *first, const char *second) {
  int prefix_match = strncmp(first, second, strlen(second)) == 0;
  printf("1. %s starts with %s: %s\n", first, second,
         prefix_match ? "true" : "false");

  const char *contains = strstr(first, second);
  int contains_match = (contains != NULL);
  printf("2. %s contains %s: %s", first, second,
         contains_match ? "true" : "false");
  if (contains_match) {
    printf(", at location %ld", contains - first);
    for (size_t start = (contains - first) + 1;;) {
      const char *next_occurrence = strstr(first + start, second);
      if (next_occurrence == NULL)
        break;
      printf(", at location %ld", next_occurrence - first);
      start = next_occurrence - first + 1;
    }
    printf("\n");
  }

  int suffix_match =
      strcmp(first + strlen(first) - strlen(second), second) == 0;
  printf("3. %s ends with %s: %s\n", first, second,
         suffix_match ? "true" : "false");
}

int main() {
  match("abracadabra", "abr");
  return 0;
}