#include <stdio.h>
#include <string.h>

void match(char *first, char *second) {
  printf("1. %s starts with %s: %d\n", first, second,
         strncmp(first, second, strlen(second)) == 0);

  int i =
      strstr(first, second) != NULL ? (int)(strstr(first, second) - first) : -1;
  printf("2. %s contains %s: %d\n", first, second, i >= 0);

  if (i >= 0) {
    printf("2.1. at location %d\n", i);

    int start = i + strlen(second);
    while (start < strlen(first)) {
      char *tmp = strstr(&first[start], second);
      if (tmp == NULL)
        break;

      printf("2.2. at location %ld\n", tmp - first);

      start += (int)(strlen(second) + (tmp - &first[start]));
    }
    printf("2.2. and that's all\n");
  }

  printf("3. %s ends with %s: %d\n", first, second,
         strcmp(&first[strlen(first) - strlen(second)], second) == 0);
}

int main() {
  match("abracadabra", "abr");
  return 0;
}