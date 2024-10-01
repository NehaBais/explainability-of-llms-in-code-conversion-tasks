#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void match(char *first, char *second) {
  if (strncmp(first, second, strlen(second)) ==
      0) // check if the first string starts with the second string
    printf("1. %s starts with %s: True\n", first, second);
  else
    printf("1. %s starts with %s: False\n", first, second);

  int i = strstr(first, second)
              ? (strstr(first, second) - first + 1)
              : -1; // check if the first string contains the second string and
                    // return its location or -1 in case it is not found.
  if (i >= 0) {
    printf("2. %s contains %s: True, at location %d\n", first, second, i);
    int start = i + 1; // starting position from which to check for matches of
                       // the second string in the rest of the first string
    while ((i = strstr(first + start, second)) != NULL) {
      printf("2.2. at location %d\n", i - first);
      start = i + 1; // update starting position from which to check for matches
                     // of the next occurrence of the second string in the rest
                     // of the first string
    }
  } else
    printf("2. %s contains %s: False\n", first, second);

  if (strncmp(first, second, strlen(second)) ==
      0) // check if the first string ends with the second string
    printf("3. %s ends with %s: True\n", first, second);
  else
    printf("3. %s ends with %s: False\n", first, second);
}

int main() {
  match("abracadabra", "abr");
  return 0;
}