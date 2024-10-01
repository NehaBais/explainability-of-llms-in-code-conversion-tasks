#include <stdio.h>
#include <string.h>

int main() {

  char s[100] = "world!";

  char hello[100] = "Hello, ";

  strcat(hello, s);

  printf("%s\n", hello);

  return 0;
}