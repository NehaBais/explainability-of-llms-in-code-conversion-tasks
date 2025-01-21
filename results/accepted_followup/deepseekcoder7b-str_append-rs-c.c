#include <stdio.h>
#include <string.h>

int main() {
  char hello[50] = "Hello world";

  strcat(hello, "!!!!");

  printf("%s\n", hello);

  return 0;
}