#include <stdbool.h> // for using boolean data type
#include <stdio.h>
#include <string.h>

void match(char *first, char *second) {
  if (strncmp(first, second, strlen(second)) == 0) {
    printf("1. %s starts with %s: True\n", first, second);
  } else {
    printf("1. %s starts with %s: False\n", first, second);
  }

  if (strncmp(first, second, strlen(second)) == 0) {
    int i = strstr(first, second) ? (strstr(first, second) - first + 1) : -1;
    if (i >= 0) {
      printf("2. %s contains %s: True, at location %d\n", first, second, i);
      char *start =
          first + i + 1; // starting position from which to check for matches of
                         // the second string in rest of the first string
      while ((i = strstr(start, second)) != NULL) {
        printf("2.2. at location %d\n", i - first);
        start = i + 1; // update starting position from which to check for
                       // matches of the next occurrence of the second string in
                       // rest of the first string
      }
    } else {
      printf("2. %s contains %s: False\n", first, second);
    }
  }

  if (strncmp(first, second, strlen(second)) == 0) {
    printf("3. %s ends with %s: True\n", first, second);
  } else {
    printf("3. %s ends with %s: False\n", first, second);
  }
}

int main() {
  match("abracadabra", "abr");
  return 0;
}