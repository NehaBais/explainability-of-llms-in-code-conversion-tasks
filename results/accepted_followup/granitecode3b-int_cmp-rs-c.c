#include
int main() {
  int a, b;
  printf("Enter two integers:");
  scanf("%d %d", &a, &b);
  if (a < b) {
    printf("%d is less than %d", a, b);
  } else if (a == b) {
    printf("%d equals to %d", a, b);
  } else {
    printf("%d is greater than %d", a, b);
  }
  return 0;
}