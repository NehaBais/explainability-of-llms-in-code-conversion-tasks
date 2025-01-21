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
  printf("a >>> b: %d", a >>> b);
  printf("n");
  printf("a rol b: %d",
         (int)(a << b)); // C does not have this built-in function, but it can
                         // be simulated with the following code: a << (b % 32)
  printf("n");
  printf("a ror b: %d", (int)(a >> b)); // same as above
  printf("n");
  return 0;
}