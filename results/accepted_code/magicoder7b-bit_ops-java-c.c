#include <stdint.h>
#include <stdio.h>

void bitwise(int a, int b) {
  // Perform bitwise AND operation
  printf("a AND b: %d\n", a & b);

  // Perform bitwise OR operation
  printf("a OR b: %d\n", a | b);

  // Perform bitwise XOR operation
  printf("a XOR b: %d\n", a ^ b);

  // Perform bitwise NOT operation on 'a' and print it.
  uint32_t res = ~((uint32_t)a & 0xFFFFFFFF);
  printf("NOT a: %d\n", res);

  // Perform left shift operation
  printf("a << b: %d\n", (a << b));

  // Perform arithmetic right shift operation
  printf("a >> b: %d\n", (a >> b));

  // Perform logical right shift operation
  uint32_t res_ror = ((uint32_t)a & 0x7FFFFFFF);
  res_ror = res_ror >> b;
  printf("a >>> b: %d\n", (int)res_ror);

  // Perform left rotate operation
  int rotLeft = a << b;
  uint32_t mask = 0xFFFFFFFF >> (32 - b);
  res = ((rotLeft & mask) | (a >> (32 - b)));
  printf("a rol b: %d\n", res);

  // Perform right rotate operation
  int rotRight = a >> b;
  uint32_t msb = ((((uint32_t)rotRight & 0x80000000)) ? 1 : 0);
  uint32_t maskRight = ((1 << b) - 1);
  res = ((rotRight & maskRight) | (msb << (32 - b)));
  printf("a ror b: %d\n", res);
}