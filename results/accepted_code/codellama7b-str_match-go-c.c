#include <stdio.h>
#include <string.h>

int main() {
  char *first = "abracadabra";
  char *second = "abr";

  printf("1. %s starts with %s: %d\n", first, second,
         strstr(first, second) == first);

  int i = strstr(first, second) - first;
  if (i >= 0) {
    printf("2. %s contains %s: %d\n", first, second, i);
    while (1) {
      i = strstr(first + i, second) - (first + i);
      if (i < 0)
        break;
      printf("2.2. at location %d\n", i);
    }
  } else {
    printf("2. %s contains %s: %d\n", first, second, -1);
  }

  printf("3. %s ends with %s: %d\n", first, second,
         strstr(first, second) == (first + strlen(first) - strlen(second)));

  return 0;
}