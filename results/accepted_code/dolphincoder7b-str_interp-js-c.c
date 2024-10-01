#include <stdio.h>
int main() {
  char original[] = "Mary had a X lamb";
  char little[] = "little";
  char replaced[256];

  sprintf(replaced, "%s", original); // does not change the original string
  printf("Original: %s\nReplaced: %s\n", original, replaced);
  return 0;
}