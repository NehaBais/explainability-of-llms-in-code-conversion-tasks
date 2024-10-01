#include <stdio.h>
#include <string.h>

int main() {
  const char *myString = "prepended to";
  const char *prefix = "my string ";
  char buffer[100];
  strcpy(buffer, prefix);
  strcat(buffer, myString);
  printf("%s\n", buffer);
  return 0;
}