#include <stdio.h>

void logic(int a, int b) {
  printf("a && b: %d\n",
         a && b); // 0 means false in C, any non-zero value is true
  printf("a || b: %d\n",
         a || b);         // 0 means false, anything else (except zero) is true
  printf("!a: %d\n", !a); // 1 means true, 0 means false
}