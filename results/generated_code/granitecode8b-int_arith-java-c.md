Here is the converted code from Java to C:
```
#include 
int main() {
 int a, b;
 
 printf("Enter two integers:");
 scanf("%d %d", &a, &b);
 
 int sum = a + b;        // The result of adding 'a' and 'b' (Note: integer addition is discouraged in print statements due to confusion with string concatenation)
 int difference = a - b; // The result of subtracting 'b' from 'a'
 int product = a * b;    // The result of multiplying 'a' and 'b'
 int division = a / b;   // The result of dividing 'a' by 'b' (Note: 'division' does not contain the fractional result)
 int remainder = a % b;  // The remainder of dividing 'a' by 'b'
 
 printf("a + b = %dn", sum);
 printf("a - b = %dn", difference);
 printf("a * b = %dn", product);
 printf("quotient of a / b = %dn", division);   // truncates towards 0
 printf("remainder of a / b = %dn", remainder);   // same sign as first operand
 
 return 0;
}
```

