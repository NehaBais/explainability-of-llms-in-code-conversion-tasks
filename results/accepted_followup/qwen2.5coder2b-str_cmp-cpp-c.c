#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void demo_compare(const char *a, const char *b, const char *semantically) {
  int result = strcoll(a, b);
  printf("%s\n",
         result == 0 ? "Equal" : (result < 0 ? "A before B" : "B before A"));
}

int main() {
  double numA = strtod("1.2", NULL);
  double numB = strtod("1.3", NULL);
  demo_compare(numA, numB, "numerically");
  return 0;
}