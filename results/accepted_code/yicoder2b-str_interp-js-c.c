#include <stdio.h>
#include <string.h>

int main() {
  char original[] = "Mary had a X lamb";
  const char *little = "little";
  char replaced[100];
  strcpy(replaced, original);
  size_t n = strlen(original);
  for (size_t i = 0; i < n; ++i) {
    if (original[i] == 'X') {
      strncat(replaced + i, little, sizeof little - 1);
      break;
    }
  }
  printf("Original string: %s\n", original);
  printf("Replaced string: %s\n", replaced);
  return 0;
}