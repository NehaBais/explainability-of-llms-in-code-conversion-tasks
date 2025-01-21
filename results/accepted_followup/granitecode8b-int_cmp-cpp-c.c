#include
int main() {
  int a, b;

  printf("Enter two integers: ");
  if (scanf("%d %d", &a, &b) != 2) {
    fprintf(stderr, "Could not read the numbers.n");
    return 1;
  }

  // test for less-than
  if (a < b) {
    printf("%d is less than %dn", a, b);
  }

  // test for equality
  if (a == b) {
    printf("%d is equal to %dn", a, b);
  }

  // test for greater-than
  if (a > b) {
    printf("%d is greater than %dn", a, b);
  }

  return 0;
}