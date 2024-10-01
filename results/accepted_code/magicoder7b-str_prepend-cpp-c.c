#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  char *myStrings[] = {"prepended to", "my string"};
  int num_strings = sizeof(myStrings) / sizeof(char *);
  int total_length = 0;
  for (int i = 0; i < num_strings; i++) {
    total_length += strlen(myStrings[i]);
  }
  char *prepended =
      malloc(total_length + 1); // 1 extra character for the null terminator
  int position = 0;
  for (int i = 0; i < num_strings; i++) {
    strncat(prepended, myStrings[i], total_length - position + 1);
    position += strlen(myStrings[i]);
  }
  printf("%s\n", prepended);
  free(prepended); // Don't forget to free the memory!

  return 0;
}