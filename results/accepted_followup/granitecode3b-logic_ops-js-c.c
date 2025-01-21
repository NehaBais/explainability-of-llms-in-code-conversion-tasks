#include <stdio.h>
void logic(int a, int b) {
  printf("a AND b: %d", a && b);
  printf("n");
  printf("a OR b: %d", a || b);
  printf("n");
  printf("NOT a: %d", !a);
  printf("n");
}
int main() {
  logic(1, 1);
  return 0;
}