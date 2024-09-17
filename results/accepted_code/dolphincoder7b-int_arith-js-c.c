#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int a = atoi(argv[1]); // convert string to integer using 'atoi' function
  int b = atoi(argv[2]);

  int sum = a + b;
  int difference = a - b;
  int product = a * b;
  double division = (double)a / (double)b; // use double for precision
  int remainder =
      a % b; // This produces the remainder after dividing 'b' into 'a'. The '%'
             // operator is called the 'modulo' operator

  printf("a + b = %d\n", sum);
  printf("a - b = %d\n", difference);
  printf("a * b = %d\n", product);
  printf("a / b = %.2f (rounding to 2 decimal places)\n", division);
  printf("a %% b = %d\n", remainder);

  return 0;
}