#include <stdbool.h>
#include <stdio.h>

void logic(bool a, bool b) {
  printf("a and b: %s\n",
         (a && b) ? "true"
                  : "false"); // In C, true is represented as 1 and false with 0
  printf("a or b: %s\n", (a || b) ? "true" : "false");
  printf("not a: %s\n",
         (!a) ? "true" : "false"); // In C, the not operator is ~ in python
}