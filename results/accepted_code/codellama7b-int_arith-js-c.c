#include <stdio.h>

int main(int argc, char *argv[]) {
  int a = atoi(argv[2]);
  int b = atoi(argv[3]);

  int sum = a + b;
  int difference = a - b;
  int product = a * b;
  float division = (float)a / b;
  int remainder =
      a % b; // This produces the remainder after dividing 'b' into 'a'. The '%'
             // operator is called the 'modulo' operator

  printf("a + b = %d\n",
         sum); // The %d syntax is a placeholder that is replaced by the sum
  printf("a - b = %d\n", difference);
  printf("a * b = %d\n", product);
  printf("a / b = %f\n", division);
  printf("a %% b = %d\n", remainder);

  return 0;
}