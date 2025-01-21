#include
int bitwise(int a, int b) {
  printf("a AND b: %d", a & b);
  printf("n");
  printf("a OR b: %dn", a | b);
  printf("a XOR b: %dn", a ^ b);
  printf("NOT a: %dn", ~a);
  printf("a << b: %dn", a << b);   // left shift
  printf("a >> b: %dn", a >> b);   // arithmetic right shift
  printf("a >>> b: %dn", a >>> b); // logical right shift
  return 0;
}