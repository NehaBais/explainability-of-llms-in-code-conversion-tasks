#include <stdio.h>
#include <string.h>

int main() {
  const char *first = "This is a sample string";
  const char *second = "sample";

  if (strcmp(first, second) == 0) {
    printf("The first string contains the second string\n");
  } else {
    printf("The first string does not contain the second string\n");
  }

  return 0;
}