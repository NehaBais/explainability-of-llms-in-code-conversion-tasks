#include <stdio.h>
#include <string.h>

int main() {
  char MyStrings[2][100] = {"prepended to", "my string"};
  char prepended[200];
  strcpy(prepended, MyStrings[0]);
  strcat(prepended, MyStrings[1]);

  printf("%s\n", prepended);

  return 0;
}