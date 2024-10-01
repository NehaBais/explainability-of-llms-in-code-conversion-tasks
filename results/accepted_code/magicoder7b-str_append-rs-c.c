#include <stdio.h>
#define SIZE 100

int main() {
  char hello[SIZE] = "Hello world";
  printf("%s", hello); // Prints "Hello world"

  strcat(hello, "!!!!");
  printf("\n%s", hello); // Prints "Hello world!!!"

  return 0;
}