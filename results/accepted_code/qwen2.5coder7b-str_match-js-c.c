#include <stdio.h>
#include <string.h>

void findStartsWith(const char *stringA, const char *stringB) {
  if (strncmp(stringA, stringB, strlen(stringB)) == 0) {
    printf("1: Does '%s' start with '%s'? Yes.\n", stringA, stringB);
  } else {
    printf("1: Does '%s' start with '%s'? No.\n", stringA, stringB);
  }
}

void findContains(const char *stringA, const char *stringB) {
  if (strstr(stringA, stringB)) {
    printf("2: Is '%s' contained in '%s'? Yes, at index %ld.\n", stringB,
           stringA, strstr(stringA, stringB) - stringA);
  } else {
    printf("2: Is '%s' contained in '%s'? No.\n", stringB, stringA);
  }
}

void findEndsWith(const char *stringA, const char *stringB) {
  size_t lena = strlen(stringA);
  size_t lenb = strlen(stringB);

  if (lena >= lenb && strncmp(&stringA[lena - lenb], stringB, lenb) == 0) {
    printf("3: Does '%s' end with '%s'? Yes.\n", stringA, stringB);
  } else {
    printf("3: Does '%s' end with '%s'? No.\n", stringA, stringB);
  }
}

int main() {
  char stringA[] = "tacoloco";
  char stringB[] = "co";

  findStartsWith(stringA, stringB);
  findContains(stringA, stringB);
  // Optional requirement for multiple matches is not implemented as C does not
  // support regular expressions in the same way JavaScript does
  findEndsWith(stringA, stringB);

  return 0;
}