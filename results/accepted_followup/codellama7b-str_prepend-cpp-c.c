#include <stdio.h>
#include <stdlib.h>
#include <string.h> // include string header file

int main() {
  char *myStrings[] = {"prepended to", "my string"};
  char prepended[1024];
  prepended[0] = '\0';
  for (int i = 0; i < sizeof(myStrings) / sizeof(myStrings[0]); i++) {
    strcat(prepended, myStrings[i]);
  }
  printf("%s\n", prepended);
  return 0;
}