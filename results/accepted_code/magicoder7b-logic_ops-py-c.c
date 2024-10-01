#include <stdio.h>

void logic(int a, int b) {
  // Print 'a and b' result
  if (a && b)
    printf("a and b: true\n");
  else
    printf("a and b: false\n");

  // Print 'a or b' result
  if (a || b)
    printf("a or b: true\n");
  else
    printf("a or b: false\n");

  // Print 'not a' result
  if (!a)
    printf("not a: true\n");
  else
    printf("not a: false\n");
}