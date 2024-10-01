#include <stdio.h>
#include <string.h>

int main() {
  char original[] = "Mary had a X lamb";
  char little[] = "little";
  char replaced[strlen(original) + strlen(little) - 1];

  snprintf(replaced, sizeof(replaced), original, little);

  printf("Original string: %s\n", original);
  printf("Replaced string: %s\n", replaced);

  return 0;
}