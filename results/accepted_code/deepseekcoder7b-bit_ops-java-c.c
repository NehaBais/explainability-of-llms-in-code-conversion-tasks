#include <stdio.h>

void bitwise(int a, int b) {
  if (b < 0) {
    printf("Error: the second integer should be non-negative.\n");
    return;
  }

  printf("a AND b: %d\n", (a & b));
  printf("a OR b: %d\n", (a | b));
  printf("a XOR b: %d\n", (a ^ b));
  printf("NOT a: %d\n",
         ~a); // NOTE: In C, the bitwise complement is done with '~' and it
              // returns an unsigned int. If we want to get back to signed, we
              // can cast to signed, but this might be confusing as the result
              // isn't always what you would expect in all cases.
  printf("a << b: %d\n", (a << b)); // left shift
  printf("a >> b: %d\n",
         (unsigned int)a >> b); // arithmetic right shift, cast to unsigned to
                                // avoid sign extension warning
  printf("a >>> b: %u\n",
         a >> b); // logical right shift, same as above but using unsigned

  /* In C, rotation left or right can't be done simply like in Java. We have to
   * define our own functions for it */
}

int rotate_left(int value, int count) {
  return (value << count) | (value >> (32 - count));
}

int rotate_right(int value, int count) {
  return (value >> count) | (value << (32 - count));
}

int main() {
  bitwise(5, 1); // example usage
  printf("Rotate left: %d\n", rotate_left(8, 1));
  printf("Rotate right: %d\n", rotate_right(8, 1));
  return <｜begin▁of▁sentence｜ >
         0; // success in C<｜end▁of▁sentence｜><｜begin▁of▁sentence｜>/*
  * /