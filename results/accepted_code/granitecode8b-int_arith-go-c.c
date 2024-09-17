#include
#include
int main() {
  int a, b;
  printf("Enter two integers: ");
  scanf("%d %d", &a, &b);
 printf("%d + %d = %d
", a, b, a+b);
 printf("%d - %d = %d
", a, b, a-b);
 printf("%d * %d = %d
", a, b, a*b);
 printf("%d / %d = %d
", a, b, a/b); // truncates towards 0
 printf("%d %% %d = %d
", a, b, a%b); // same sign as first operand
 // no exponentiation operator
 return 0;
}