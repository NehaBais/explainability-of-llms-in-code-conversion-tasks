#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char *greeting = (char *)malloc(6 * sizeof(char));
  strcpy(greeting, "Hello");

  char *appendStr = ", world!";
  greeting = realloc(greeting,
                     (strlen(greeting) + strlen(appendStr) + 1) * sizeof(char));
  strcat(greeting, appendStr);

  printf("%s\n", greeting);

  free(greeting);
  return 0;
}