#include

int main() {
  int a, b;
  printf("Enter two integers: ");
  scanf("%d %d", &a, &b);
  printf("a+b = %d
", a + b);
  printf("a-b = %d
", a - b);
  printf("a*b = %d
", a * b);
  int quotient = a / b;
  int remainder = a % b;
  printf("a/b = %d, remainder %d
", quotient, remainder);
  return 0;
}