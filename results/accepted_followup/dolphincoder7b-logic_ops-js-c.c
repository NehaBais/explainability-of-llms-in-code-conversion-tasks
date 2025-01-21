#include <stdio.h> // include stdio.h to use printf()

void logic(int a, int b) {
  printf("a AND b:   %d\n", a && b);
  printf("a OR b:    %d\n", a || b);
  printf("NOT a:     %d\n", !a);
}