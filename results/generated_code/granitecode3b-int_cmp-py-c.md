Here's the C code that achieves the same functionality:
```c
#include 
int main() {
 int a, b;
 
 printf("Enter value of a: ");
 scanf("%d", &a);
 
 printf("Enter value of b: ");
 scanf("%d", &b);
 
 if (a < b) {
 printf("a is less than b");
 } else if (a > b) {
 printf("a is greater than b");
 } else {
 printf("a is equal to b");
 }
 
 return 0;
}
```
This code uses the `if-else` statement to compare the two integers and prints a message based on the result. The `scanf` function is used to read input from the user.

