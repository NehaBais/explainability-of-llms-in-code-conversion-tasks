#include
int main() {
  int a, b;
  printf("Enter two integers: ");
  scanf("%d %d", &a, &b);
  if (a < b) {
    printf("%d is less than %dn", a, b);
  } else if (a == b) {
    printf("%d equals %dn", a, b);
  } else {
    printf("%d is greater than %dn", a, b);
  }
  return 0;
}