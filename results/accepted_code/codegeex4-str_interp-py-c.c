#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void replace(char *original, char *toFind, char *replacement) {
  char buffer[1024];
  char *ch;
  strcpy(buffer, original);
  ch = strstr(buffer, toFind);

  while (ch != NULL) {
    *ch = '\0';
    strcat(buffer, replacement);
    strcat(buffer, toFind + strlen(toFind));
    ch = strstr(buffer, toFind);
  }
}

int main() {
  char original[] = "Mary had a X lamb.";
  char extra[] = "little";
  replace(original, "X", extra);

  printf("%s\n", original);

  return 0;
}