#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  char hello[] = "Hello world";
  strcat(hello, "!!!!");
  printf("%s\n", hello);
  return 0;
}