#include <stdio.h>
#include <string.h>

void match(const char *first, const char *second) {
  size_t start = 0;
  printf("1. %s starts with %s: ", first, second);
  if (strncmp(first, second, strlen(second)) == 0) {
    printf("true\n");
  } else {
    printf("false\n");
  }
  printf("2. %s contains %s: ", first, second);
  while ((start = strstr(first + start, second))) {
    printf("%d ", start - first);
    if (strlen(second) > strlen(first))
      break;
    ++start;
  }
  printf("\n");
  printf("3. %s ends with %s: ", first, second);
  if (strncmp((first + strlen(first) - strlen(second)), second,
              strlen(second)) == 0) {
    printf("true\n");
  } else {
    printf("false\n");
  }
}

int main() {
  match("abracadabra", "abr");
  return 0;
}