Here is the converted code from JavaScript to C:
```
#include 
int main(int argc, char *argv[]) {
 int a = atoi(argv[1]);
 int b = atoi(argv[2]);
 
 int sum = a + b;
 int difference = a - b;
 int product = a * b;
 float division = (float)a / b; // Casting to float to avoid integer division and get decimal result
 int remainder = a % b;
 
 printf("a + b = %d
", sum);
 printf("a - b = %d
", difference);
 printf("a * b = %d
", product);
 printf("a / b = %.2f (rounded)
", division); //%.2f is used to print only 2 decimal places
 printf("a %% b = %d (remainder matches sign of first operand)
", remainder);
 
 return 0;
}
```
Note: I used `atoi` instead of `parseInt` because the C standard library does not have a function called `parseInt`. Also, in C, division always rounds down to the nearest integer. Therefore, I used `(float)a / b` to get a decimal result and rounded it to two decimal places using `%f`. Finally, for the modulo operator, I used `a % b` to match the sign of the remainder with the sign of the first operand.

