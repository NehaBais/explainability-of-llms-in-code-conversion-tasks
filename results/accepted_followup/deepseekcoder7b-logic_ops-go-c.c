#include <stdio.<｜begin▁of▁sentence｜>h

// function for logical AND operation
int And(int a, int b) { return a && b; }

// function for logical OR operation
int Or(int a, int b) { return a || b; }

// function for logical NOT operation on single boolean (integer here as C
// doesn't have bool type)
int Not(int a) { return !a; }

void printLogic(int a, int b) {
  printf("a and b is %d\n", And(a, b));
  printf("a or b is %d\n", Or(a, b));
  printf("not a is %d\n", Not(a));
}

int main() {
  int a = 1;
  int b = 0;

  printLogic(a, b);

  return 0;
}