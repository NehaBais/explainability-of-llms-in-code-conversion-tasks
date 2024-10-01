#include <stdio.h>
#include <string.h>

int main() {
  char greeting[12];
  strcpy(greeting, "Hello");
  strcat(greeting, " , world!");
  printf("%s\n", greeting);
  return 0;
}