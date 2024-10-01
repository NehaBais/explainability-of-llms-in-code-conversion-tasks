#include <stdbool.h>
#include <stdio.h>

void printLogic(bool A, bool B) {
  printf("A and B is %s\n", (A && B) ? "true" : "false");
  printf("A or B is %s\n", (A || B) ? "true" : "false");
  printf("Not A is %s\n", !A ? "true" : "false");
}

int main() {
  bool a = true;
  bool B = false;
  printLogic(A, B);
  return 0;
}