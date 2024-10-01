#include <stdio.h>
#include <string.h>

int main(void) {
  char greeting[100] = "Hello";
  strcat(greeting, ", world!");
  printf("%s\n", greeting);
  return 0;
}