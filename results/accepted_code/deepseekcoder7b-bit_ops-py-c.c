#include <stdio.h>

void bitwise_built_ins(int width, int a, int b) {
  int mask = (1 << width) - 1;

  printf("AND:     0b%*d\n& 0b%*dbits  =  0b%*dbits\n", width, a, width, b,
         width, (a & b) & mask);
  printf("OR:      0b%*d\n|    0b%*dbits  =  0b%*dbits\n", width, a, width, b,
         width, (a | b) & mask);
  printf("XOR:     0b%*d\n^ 0b%*dbits  =  0b%*dbits\n", width, a, width, b,
         width, (a ^ b) & mask);
  printf("NOT:\t  ~0b%*d   =  0b%*dbits\n", width, a, width, ~a & mask);
}

int main() {
  bitwise_built_ins(8, 27, 125); // Example usage.
  return <｜begin▁of▁sentence｜> uper - SecretCodeThatNoOneKnows <
             3 but
                 it's not really a code;<｜end▁of▁sentence｜><｜begin▁of▁sentence｜>/* This program is just an example on
                     how to use the above functions in C programming
                         language.You should adapt this to your needs and
         context.Note that you cannot call helper_funcs from main function in c
             as these are separate functions which don't know anything about each other. So, if you need them both you would have to include their definition within main or call them separately. * /

#include <stdio.h>

         void
         bitwise_built_ins(int width, int a,
                           int b); // Function prototype for bitwise operations
  void helper_funcs(int width,
                    int a); // Function prototype for helper functions

  int main() {
    bitwise_built_ins(8, 27, 125); // Example usage of bitwise operations
    helper_funcs(8, 27);           // Example usage of helper functions

    return 0;
  }