#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char *hello = "Hello world";
  char *append_text = "!!!!";
  printf("%s%s\n", hello, append_text);
}