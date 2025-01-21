#include <stdio.h>

int main() {
  int n1, n2;

  printf("Enter number: ");
  scanf("%d", &n1);

  printf("Enter number: ");
  scanf("%d", &n2);

  switch (n1) {
  case n1 < n2 ? n1 + 1: n1 - 1:
      printf("%d 'less than' %d\n", n1, n2));
    break;
  case n1 == n2 ? 0: 1:
      printf("%d 'equal to' %d\n", n1, n2));
    break;
  default:
      printf("%d 'greater than' %d\n", n1, n2));
  }

  return 0;
}