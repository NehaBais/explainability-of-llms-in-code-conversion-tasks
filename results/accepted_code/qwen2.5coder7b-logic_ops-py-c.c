#include <stdio.h>

void logic(int a, int b) {
  printf("a && b: %d\n", a && b);
  printf("a || b: %d\n", a || b);
  printf("!a: %d\n", !a);
}

int main() {
  logic(1, 0); // This is just an example. You can replace the arguments as per
               // your requirement.
  return 0;
}