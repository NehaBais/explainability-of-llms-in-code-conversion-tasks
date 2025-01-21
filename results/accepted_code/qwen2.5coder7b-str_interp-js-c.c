#include <stdio.h>
#include <string.h>

void replaceX(char *original, const char *replacement) {
  char buffer[1024];
  int pos = 0;
  while (*original != '\0') {
    if (*original == 'X') {
      strcpy(buffer + pos, replacement);
      pos += strlen(replacement);
    } else {
      buffer[pos++] = *original;
    }
    original++;
  }
  buffer[pos] = '\0';
  printf("Replaced string: %s\n", buffer);
}

int main() {
  char original[1024] = "Mary had a X lamb";
  const char *little = "little";

  replaceX(original, little);

  return 0;
}