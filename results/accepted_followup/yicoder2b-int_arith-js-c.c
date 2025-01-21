#include <stdio.h>
#include <string.h> // To use strtol() function which is defined in strings.h header file

int main(int argc,
         char *argv[]) { // argv contains string arguments from command line
  if (argc != 3) {       // Ensure there are exactly two arguments
    printf("You must provide two integer arguments\n");
    return -1; // Indicate error in the program execution
  }
  int a = strtol(argv[1], NULL, 10); // Convert string to integer (base 10)
  int b = strtol(argv[2], NULL, 10);

  int sum = a + b;
  int difference = a - b;
  int product = a * b;
  float quotient =
      (float)a /
      b; // Note the use of float for division to avoid integer truncation
  int remainder = a % b;

  if ((remainder < 0 && a > 0) || (remainder >= 0 && a <= 0)) {
    printf("The sign of remainder does not match the signs of first and second "
           "operands\n");
  } else if (a > b) {
    printf("Towards positive infinity, towards negative zero\n");
  } else {
    printf("Towards negative infinity, towards positive zero\n");
  }
  // The %d syntax is a placeholder that is replaced by the sum, difference,
  // product, quotient and remainder values.
  printf("a + b = %d\na - b = %d\na * b = %d\na / b = %.2f\na %% b = %d\n", sum,
         difference, product, quotient, remainder);
  return 0; // Indicates successful program execution in C
}