#include <stdio.h>
#include <string.h>

int main() {
  char original[] = "Mary had a X lamb";
  const char *little = "little";
  char replaced[100]; // Adjust the size as per your requirements

  strncpy(replaced, original, strlen(original));
  replaced[strlen(original)] = '\0';

  // Find the position of 'X' in the string
  char *pos = strchr(replaced, 'X');
  if (pos != NULL) {
    strcpy(pos, little);
  }

  printf("Replaced: %s\n", replaced);

  return 0;
}