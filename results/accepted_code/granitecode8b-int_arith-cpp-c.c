#include
int main() {
  int a, b;
  printf("Enter two integers: ");
  scanf("%d %d", &a, &b);
  printf("Sum = %dn", a + b);
  printf("Difference = %dn", a - b);
  printf("Product = %dn", a * b);
  printf("Quotient (rounds towards zero) = %dn", a / b);
  printf("Remainder (matches sign of first operand) = %dn", a % b);
  return 0;
}