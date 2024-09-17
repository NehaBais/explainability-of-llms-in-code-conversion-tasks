#include
int main() {
  int a = 5;
  int b = 3;

  printf("a AND b: %d", a & b);
  printf("n");
  printf("a OR b: %d", a | b);
  printf("n");
  printf("a XOR b: %d", a ^ b);
  printf("n");
  printf("NOT a: %d", ~a);
  printf("n");
  printf("a << b: %d", a << b);
  printf("n");
  printf("a >> b: %d", a >> b);
  printf("n");
  printf("a >>> b: %d", a >> b);
  return 0;
}