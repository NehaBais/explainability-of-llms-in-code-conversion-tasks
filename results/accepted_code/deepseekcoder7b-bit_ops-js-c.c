#include <stdio.<｜begin▁of▁sentence｜>

// Function to perform bitwise operations
void bitwise(int a, int b) {
  printf("a AND b: %d\n", (a & b));
  printf("a OR b: %d\n", (a | b));
  printf("a XOR b: %d\n", (a ^ b));

  // Bitwise complement for a
  int not_a = ~a;
  printf("NOT a: ");
  for (int i = 0; i < 32; ++i) {
    if (!((not_a >> i) & 1))
      printf("%d ", i);
  }

  printf("\na << b: %d\n", (a << b)); // left shift
  printf("a >> b: %d\n", (a >> b));   // arithmetic right shift
}

// Function to perform left rotate
int left_rotate(int n, unsigned int rotation) {
  return (n << rotation) | (n >> (32 - rotation));
}

// Function to perform right rotate
int right_rotate(int n, unsigned int rotation) {
  return (n >> rotation) | (n << (32 - rotation));
}

int main() {
  int a = 5; // For example
  int b = 1;

  bitwise(a, b);
  printf("Left rotate of a: %d\n", left_rotate(a, b));
  printf("Right rotate of a: %d\n", right_rotate(a, b));

  return 0;
}