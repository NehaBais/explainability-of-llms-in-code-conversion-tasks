#include
int main() {
  int a, b;

  printf("Enter two integers: ");
  scanf("%d %d", &a, &b);

  int sum = a + b; // The result of adding 'a' and 'b' (Note: integer addition
                   // is discouraged in print statements due to confusion with
                   // string concatenation)
  int difference = a - b; // The result of subtracting 'b' from 'a'
  int product = a * b;    // The result of multiplying 'a' and 'b'
  int division = a / b;   // The result of dividing 'a' by 'b' (Note: 'division'
                          // does not contain the fractional result)
  int remainder = a % b;  // The remainder of dividing 'a' by 'b'

  printf("a + b = %d\n", sum);
  printf("a - b = %d\n", difference);
  printf("a * b = %d\n", product);
  printf("quotient of a / b = %d (truncates towards 0)\n",
         division); // truncates towards 0
  printf("remainder of a / b = %d (same sign as first operand)\n",
         remainder); // same sign as first operand

  return 0;
}