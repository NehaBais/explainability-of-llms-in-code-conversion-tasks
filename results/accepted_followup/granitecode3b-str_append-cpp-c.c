#include <stdio.h>
#include <string.h>
int main() {
  char *greeting = "Hello";
  strcat(greeting, " , world!");
  printf("%s", greeting);
  return 0;
}