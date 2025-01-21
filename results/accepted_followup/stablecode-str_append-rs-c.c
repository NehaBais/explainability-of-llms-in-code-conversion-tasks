#include <stdio.h>
#include <string.h>

int main() {
  char hello[20];
  strcpy(hello, "Hello world");
  strcat(hello, "!!!!");
  printf("%s\n", hello);

  return 0;
}