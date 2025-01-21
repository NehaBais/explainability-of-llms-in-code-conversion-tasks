#include <string.h>
int main() {
  int q1 = !strcmp(stringA, stringB);
  char *q2multi = strstr(stringA, stringB);
  unsigned long q3 = strlen(stringA);
  printf("1: Does '%s' start with '%s'? %d\n", stringA, stringB, q1);
  return 0;
}