#include <stdio.h>
#include <string.h> // This is the fix
#define SIZE 100

int main() {
  char hello[SIZE] = "Hello world";
  printf("%s", hello);

  strcat(hello, "!!!!");
  printf("\n%s", hello);

  return 0;
}