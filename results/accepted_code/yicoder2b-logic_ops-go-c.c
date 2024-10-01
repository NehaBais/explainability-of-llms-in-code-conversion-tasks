#include <stdio.h>

void printLogic(int a, int b) {
  // The "&&" operator in Golang is represented by "&amp;&amp;" in C
  printf("a and b is %d\n", (a && b));

  // The "||" operator in Golang is represented by "||\|" in C
  printf("a or b is %d\n", (a || b));

  // The "!" operator in Golang is represented by "&amp;#x21" in C
  printf("not a is %d\n", !a);
}