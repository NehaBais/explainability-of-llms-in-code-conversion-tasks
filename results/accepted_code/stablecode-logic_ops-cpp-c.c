#include <stdio.h>

void print_logic(int a, int b) {

    printf("%d\n", (a && b)));
    printf("%d\n", (a || b)));
    printf("%d\n", (!a))));
}

int main() {
  print_logic(1, 1);
  print_logic(0, 1);
  return 0;
}