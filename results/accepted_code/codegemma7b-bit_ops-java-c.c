void bitwise(int a, int b) {
  printf("a AND b: %d\n", a & b);
  printf("a OR b: %d\n", a | b);
  printf("a XOR b: %d\n", a ^ b);
  printf("NOT a: %d\n", ~a);
  printf("a << b: %d\n", a << b);  // left shift
  printf("a >> b: %d\n", a >> b);  // arithmetic right shift
  printf("a >>> b: %d\n", a >> b); // logical right shift
  printf("a ROL b: %d\n",
         (a << (b & 31)) | (a >> (32 - (b & 31)))); // rotate left
  printf("a ROR b: %d\n",
         (a >> (b & 31)) | (a << (32 - (b & 31)))); // rotate right
}