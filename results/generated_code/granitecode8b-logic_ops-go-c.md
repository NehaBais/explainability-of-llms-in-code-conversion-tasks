Here's the converted code in C:
```c
#include 
#include 
void printLogic(int a, int b) {
 printf("a and b is %d
", a && b);
 printf("a or b is %d
", a || b);
 printf("not a is %d
", !a);
}
int main() {
 printLogic(1, 1); // Example usage
 return 0;
}
```
Note that in C, logical values are represented as integers (0 for false and 1 for true). The `&&` and `||` operators evaluate to 1 if both operands are true or both are false, respectively. The `!` operator negates the value of its operand. In this code, we also added an example usage of the function in the `main` function.

