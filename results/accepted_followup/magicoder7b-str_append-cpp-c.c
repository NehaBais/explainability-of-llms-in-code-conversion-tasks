#include <stdio.h>
#include <string.h>
#define SIZE 1024

int main() {
  char greeting[SIZE] = "Hello";
  strcat(greeting, ", world!");
  printf("%s\n", greeting);

  return 0;
}