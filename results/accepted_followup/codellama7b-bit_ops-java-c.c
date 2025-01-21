void bitwise(int a, int b) {
  printf("a AND b: %d\n", (a & b));
  printf("a OR b: %d\n", (a | b));
  printf("a XOR b: %d\n", (a ^ b));
  printf("NOT a: %d\n", ~a);
  printf("a << b: %d\n", (a << b));
  printf("a >> b: %d\n", (a >> b));
  printf("a >>> b: %d\n", (unsigned int)a >> b);
  printf("a rol b: %u\n", a << (b & 0x1F));
  printf("a ror b: %u\n", a >> (b & 0x1F));
}