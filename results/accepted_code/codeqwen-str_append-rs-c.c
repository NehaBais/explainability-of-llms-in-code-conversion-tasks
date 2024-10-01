#include <stdio.h>
#include <string.h>

int main() {
  char hello[] = "Hello world";
  strcat(hello, "!!!!");
  printf("%s", hello);
}