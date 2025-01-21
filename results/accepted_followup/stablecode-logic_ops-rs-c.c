#include <stdio.h>

void boolean_ops(int a, int b) {
    printf("%d and %d 
-> %d\n", a, b, (a != 0) && (b != 0)));

    printf("%d or %d 

-> %d\n", a, b, (a != 0) || (b != 0)));

    printf("%d xor %d 

-> %d\n", a, b, (a != 0) ^ (b != 0)));

    printf("not %d 

-> %d\n", a, !a);
}

int main() {
  boolean_ops(1, 1);
  boolean_ops(1, 0);
  boolean_ops(0, 1);
  boolean_ops(0, 0);

  return 0;
}