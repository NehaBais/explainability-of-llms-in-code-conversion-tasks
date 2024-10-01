Here's the equivalent C code for the given Python function:
```
#include 
int main() {
 int a, b;
 
 printf("Enter first value (0 or 1): ");
 scanf("%d", &a);
 
 printf("Enter second value (0 or 1): ");
 scanf("%d", &b);
 
 printf("a and b: %dnn", a && b);
 printf("a or b: %dn", a || b);
 printf("not a: %dn", !a);
 
 return 0;
}
```
The C code prompts the user to enter two values (either 0 or 1), and then uses logical operators (`&&` for "and" and `||` for "or") and the unary operator (`!`) to perform the same operations as the Python function. The output of the C program will be similar to the one obtained by running the Python script, but in a different programming language.

