Here is the converted code from Rust to C:
```
#include 
#include 
int main(int argc, char *argv[]) {
 if (argc != 3) {
 fprintf(stderr, "Usage: %s num1 num2n", argv[0]);
 return EXIT_FAILURE;
 }
 
 int a = atoi(argv[1]);
 int b = atoi(argv[2]);
 
 printf("sum:              %dn", a + b);
 printf("difference:       %dn", a - b);
 printf("product:          %dn", a * b);
 printf("integer quotient: %dn", a / b); // truncates towards zero
 printf("remainder:        %dn", a % b); // same sign as first operand
 
 return EXIT_SUCCESS;
}
```
Note that in C, the `atoi()` function is used to convert string arguments to integers. The `printf()` function is used to print the results to the console. Error handling is not included in this code.

