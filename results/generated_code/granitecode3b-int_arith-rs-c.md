Sure, here's the C code that performs the same functionality as the Rust code you provided:
```
#include 
#include 
int main(int argc, char *argv[]) {
 if (argc != 3) {
 printf("Usage: %s num1 num2\n", argv[0]);
 return 1;
 }
 int a = atoi(argv[1]);
 int b = atoi(argv[2]);
 
 printf("sum:              %d\n", a + b);
 printf("difference:       %d\n", a - b);
 printf("product:          %d\n", a * b);
 printf("integer quotient: %d (truncates towards zero)\n", a / b);
 printf("remainder:        %d (same sign as first operand)\n", a % b);
 
 return 0;
}
```
Note that the C code does not include error handling, so it may terminate unexpectedly if the user provides invalid input. Additionally, the C code does not indicate how integer division rounds, and it may give different results for the remainder than the Rust code. Finally, the C code does not indicate whether the remainder has the same sign as the first operand or the second operand, so it may be unclear which sign to use in some cases.

