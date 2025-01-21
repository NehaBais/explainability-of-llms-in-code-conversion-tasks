#include <stdio.h>
#include <string.h>

void find_all(const char *str, const char *sub) {
  char *ptr = strstr(str, sub);

  if (ptr != NULL) {
    printf("Found at index %ld\n", ptr - str);
    ++ptr;
    while ((ptr = strstr(ptr, sub)) != NULL) {
      printf("Found at index %ld\n", ptr - str);
      ++ptr;
    }
  }
}

int main() {
  const char *stringA = "sip this line!";

  if (strncmp(stringA, "skip", strlen("skip")) == 0)
    printf("Match found\n");

  find_all(stringA, "line");

  if (strcmp(stringA + strlen(stringA) - 5, "sentence") == 0)
    printf("End of sentence found\n");

  return 0;
}